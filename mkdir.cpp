#include <sys/stat.h> // uso do método 'mkdir'
#include <fcntl.h> // uso da flag 'O_CREAT'

using namespace std;

int main(int arg, char** args){
    mkdir(args[1], O_CREAT); // cria um novo diretório com o nome especificado, somente com permissão de criação
}
