#include <sys/stat.h>
#include <string>
#include <iostream>


using namespace std;

int main(int arg, char **args){
    int permissions = strtol(args[1], NULL, 8);
    chmod(args[2], permissions);
}