#include <fcntl.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int main(int arg, char** args){
    if(open(args[1], O_RDONLY) == -1) cout << "Arquivo não existe\n";
    else unlink(args[1]);
}