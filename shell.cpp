#include <iostream>
#include <unistd.h>
#include <vector>
#include <sys/wait.h>


void process_command(std::string command, std::vector<std::string> history) {
    // Se for comando interno...
    if (command == "exit") exit(0);
    else if (command == "pwd"){
        history.push_back(command);
        std::cout << get_current_dir_name() << std::endl;
    }
    else if (command.find("history") != -1){
        if(command.find(" -c") != -1) history.clear();
        else{
            int size = history.size();
            if(size >= 10){
                for(int i = 9; i > 0; --i) std::cout << i << " " << history[size - i - 1] << std::endl;
            }
            else{
                for(int i = size - 1; i > 0; --i) std::cout << i << " " << history[size - i] << std::endl;
            }
        }
    }

    // Se for comando externo

    // * necessário verificar se é para ser executado em background
    /*  Se for caminho relativo, procurar o comando na lista de diretórios
        Se for absoluto verifica se comando existe
    */
    else{
        std::string absolute_path = command.find(" ") != -1 ? "/mnt/c/Users/alves/OneDrive - IFRN/S.O/" + command.substr(0, command.find(" ")) : "/mnt/c/Users/alves/OneDrive - IFRN/S.O/" + command;
        if (access(absolute_path.c_str(), F_OK) == 0) { // Arquivo existe no diretório
            if (access(absolute_path.c_str(), X_OK) == 0) { // Arquivo é executável
                pid_t pid = fork();
                if (pid < 0){ // Erro
                    std::cout << "Erro de execução!" << std::endl;
                    return;
                } else if (pid == 0){ //processo filho
                    int params = 0;
                    std::string command_copy = command;
                    while(command_copy.find(" ") != -1){
                        ++params;
                        command_copy = command_copy.substr(command_copy.find(" ") + 1, command_copy.size() - 1);
                    }
                    char * argv[params+2] = {(char *)command.c_str()};
                    history.push_back(command);
                    if(command.find(" ") != -1){
                        for(int i = 1; i <= params; ++i){
                            command = command.substr(command.find(" ") + 1, command.size() - 1);
                            argv[i] = (char *)command.c_str();
                        }
                    }
                    argv[params + 2 - 1] = nullptr;

                    execve(absolute_path.c_str(), argv, NULL);
                } else { // Processo pai
                    /* Deve adicionar processo filho na lista (std::vector) 
                    de processos em execução para gerenciar background. */
                    /* Processo pai espera processo filho terminar. */
                    waitpid(pid, nullptr, 0); 
                }
            }
            else std::cout << "permission denied: " << command << std::endl; // Arquivo não é executável
        } 
        else std::cout << "Command not found: " << command << std::endl; // Arquivo não existe
    }
}

int main() {
    std::vector<std::string> history;
    while (true) {
        std::cout << "$> ";
        std::string command;
        getline(std::cin, command);
        process_command(command, history);
        std::cout << history.size() << std::endl;
    }
    return 0;
}
