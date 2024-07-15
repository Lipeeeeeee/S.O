#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(int arg, char** args){
    int f = open(args[1], O_RDONLY);
    char buf[1024];
    int s;
    while((s = read(f, buf, 1024)) != 0) write(1, buf, s);
}