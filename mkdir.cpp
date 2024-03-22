#include <sys/stat.h>
#include <fcntl.h>

using namespace std;

int main(int arg, char** args){
    mkdir(args[1], O_CREAT);
}