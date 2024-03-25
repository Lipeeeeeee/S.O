#include <unistd.h>
#include <iostream>

using namespace std;

int main(int arg, char** args){
    int ans = rmdir(args[1]);
    if(ans == -1) cout << "O diretório precisa estar vazio para ser excluído\n";
}