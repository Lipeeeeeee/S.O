#include <dirent.h> // uso e manipulação de diretórios
#include <iostream> // saída de dados

using namespace std;

int main(int arg, char **args){
    DIR *dir = args[1] == nullptr ? opendir(".") : opendir(args[1]); // teste se foi dado algum diretório como argumento, guardando no espaço de memória reservado por *dir
    struct dirent *direc; // struct para interagir com o diretório
    if(dir == nullptr) cout << "Diretório não encontrado\n"; // teste se o diretório informado existe
    else{
        while((direc = readdir(dir)) != nullptr) cout << direc->d_name << endl; // enquanto tiver conteúdo no diretório referenciado por dir, mostre seus arquivos 
        closedir(dir); // fechar diretório
    }
    return 0;
}
