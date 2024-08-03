<<<<<<< HEAD
#include <fcntl.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int main(int arg, char** args){
    if(open(args[1], O_RDONLY) == -1) cout << "Arquivo não existe\n";
    else unlink(args[1]);
}
=======
#include <fcntl.h> // uso do método para abrir arquivo
#include <unistd.h> // uso do método de remoção do arquivo
#include <iostream> // saída de dados

using namespace std;

int main(int arg, char** args){
    if(open(args[1], O_RDONLY) == -1) cout << "Arquivo não existe\n"; // se o arquivo não existe, informe como saída
    else unlink(args[1]); // caso contrário, desvincule o arquivo, assim o excluindo
}
>>>>>>> e4f51742789ae5520e90f8166663228d1a8ba03c
