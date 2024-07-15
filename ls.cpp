#include <dirent.h>
#include <iostream>

using namespace std;

int main(int arg, char **args){
    DIR *dir = args[1] == nullptr ? opendir(".") : opendir(args[1]);
    struct dirent *direc;
    if(dir == nullptr) cout << "Diretório não encontrado\n";
    else{
        while((direc = readdir(dir)) != nullptr) cout << direc->d_name << endl;
        closedir(dir);
    }
    return 0;
}