#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include <sys/stat.h>
#include <string>

using namespace std;

int main(int arg, char** args){
    if(args[2] == nullptr or args[1] == nullptr) cout << "Informe um arquivo para copiar e um para receber a cópia\n";
    else{
        string file = args[1];
        struct stat finfo;
        stat(file.c_str(), &finfo);
        int c = open(args[1], O_RDONLY);
        int v = open(args[2], O_WRONLY | O_CREAT, finfo.st_mode);
        char buf[1024];
        int s;
        while((s = read(c, buf, 1024)) != 0) write(v, buf, s);
        close(c);
        chmod(args[2], finfo.st_mode);
        close(v);
    }
    return 0;
}