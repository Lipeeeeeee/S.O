<<<<<<< HEAD
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(int arg, char** args){
    int f = open(args[1], O_RDONLY);
    char buf[1024];
    int s;
    while((s = read(f, buf, 1024)) != 0) write(1, buf, s);
}
=======
#include <fcntl.h> // abrir arquivos
#include <unistd.h> // ler e escrever em arquivos

using namespace std;

int main(int arg, char** args){
    int f = open(args[1], O_RDONLY); // arquivo aberto para leitura do conteúdo
    char buf[1024]; // array guardando o conteúdo de 1024 bytes em 1024 bytes
    int s; // variável com a quantidade de bytes lidos
    while((s = read(f, buf, 1024)) != 0) write(1, buf, s); // enquanto tiver bytes para serem lidos, escreva no arquivo de saída (1) o que estiver em 'buf', a quantidade de bytes de 's'
}
>>>>>>> e4f51742789ae5520e90f8166663228d1a8ba03c
