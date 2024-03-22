#include <unistd.h>
#include <dirent.h>
#include <iostream>

using namespace std;

int main(int arg, char** args){
    DIR *dir = opendir(args[1]);
    struct dirent *direc;
    int ans = rmdir(args[1]);
    if(ans == -1) cout << "O diretório precisa estar vazio para ser excluído\n";
}