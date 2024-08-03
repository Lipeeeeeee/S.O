<<<<<<< HEAD
#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include <sys/stat.h>
#include <string>

using namespace std;

int main(int arg, char** args){
    if(args[2] == nullptr or args[1] == nullptr) cout << "Informe um arquivo para copiar e um para receber a cópia\n";
    else{
        string file = args[1];
        struct stat finfo;
        stat(file.c_str(), &finfo);
        int c = open(args[1], O_RDONLY);
        int v = open(args[2], O_WRONLY | O_CREAT, finfo.st_mode);
        char buf[1024];
        int s;
        while((s = read(c, buf, 1024)) != 0) write(v, buf, s);
        close(c);
        chmod(args[2], finfo.st_mode);
        close(v);
    }
    return 0;
}
=======
#include <fcntl.h> // abrir arquivos
#include <unistd.h> // ler e escrever sobre arquivos
#include <sys/stat.h> // copiar as permissões do arquivo
#include <string> // string para facilitar no uso de métodos específicos

using namespace std;

int main(int arg, char** args){
    string file = args[1]; // arquivo a ser copiado em string
    struct stat finfo; // struct para pegar os dados de um arquivo
    stat(file.c_str(), &finfo); // dados do arquivo a ser copiado transferidos para a variável 'finfo'
    int c = open(args[1], O_RDONLY); // abrindo arquivo a ser copiado, somente para leitura
    int v = open(args[2], O_WRONLY | O_CREAT, finfo.st_mode); // abrindo arquivo para receber a cópia, sendo para escrita ou criação, caso não exista, com as permissões do arquivo a ser copiado
    char buf[1024]; // buf para guardar os dados de 1024 bytes em 1024 bytes
    int s; // variável armazenando a quantidade de bytes lidos
    while((s = read(c, buf, 1024)) != 0) write(v, buf, s); // enquanto tiver dados no arquivo, escreva-os no arquivo que receberá a cópia
    close(c); // fecha o arquivo a ser copiado
    chmod(args[2], finfo.st_mode); // confirma a mudança das permissões do arquivo que recebeu a cópia
    close(v); // fecha o arquivo que recebeu a cópia
    return 0;
}
>>>>>>> e4f51742789ae5520e90f8166663228d1a8ba03c
