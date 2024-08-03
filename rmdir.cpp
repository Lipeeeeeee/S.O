<<<<<<< HEAD
#include <unistd.h>
#include <iostream>

using namespace std;

int main(int arg, char** args){
    int ans = rmdir(args[1]);
    if(ans == -1) cout << "O diretório precisa estar vazio para ser excluído\n";
}
=======
#include <unistd.h> // uso do método de remoção de diretório
#include <iostream> // saída de dados

using namespace std;

int main(int arg, char** args){
    int ans = rmdir(args[1]); // variável armazenando o resultado da remoção do diretório
    if(ans == -1) cout << "O diretório precisa estar vazio para ser excluído\n"; // caso o diretório tenha algum conteúdo, informará na saída de dados
    // caso contrário, o diretório foi removido
}
>>>>>>> e4f51742789ae5520e90f8166663228d1a8ba03c
