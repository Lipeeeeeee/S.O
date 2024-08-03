#include <unistd.h> // uso do método de remoção de diretório
#include <iostream> // saída de dados

using namespace std;

int main(int arg, char** args){
    int ans = rmdir(args[1]); // variável armazenando o resultado da remoção do diretório
    if(ans == -1) cout << "O diretório precisa estar vazio para ser excluído\n"; // caso o diretório tenha algum conteúdo, informará na saída de dados
    // caso contrário, o diretório foi removido
}
