<<<<<<< HEAD
#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main(int arg, char** args){
    mkdir(args[1], O_CREAT);
}
=======
#include <sys/stat.h> // uso do método 'mkdir'
#include <fcntl.h> // uso da flag 'O_CREAT'

using namespace std;

int main(int arg, char** args){
    mkdir(args[1], O_CREAT); // cria um novo diretório com o nome especificado, somente com permissão de criação
}
>>>>>>> e4f51742789ae5520e90f8166663228d1a8ba03c
