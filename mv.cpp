<<<<<<< HEAD
#include <iostream>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>

using namespace std;

int main(int arg, char** args){
    if(args[3] == nullptr && opendir(args[2]) == NULL) rename(args[1], args[2]);
    else{
        
        int olddir = open(get_current_dir_name(), O_RDONLY);
        chdir(args[arg - 1]);
        cout << get_current_dir_name() << endl;
        int newdir = open(get_current_dir_name(), O_RDONLY);
        cout << olddir << ' ' << newdir << endl;
        for(int i = 1; i < arg - 1; ++i) cout << renameat(olddir, args[i], newdir, args[i]) << endl;
    }
}
=======
#include <fcntl.h> // uso da flag 'O_RDONLY'
#include <stdio.h> // uso do método 'rename e renameat'
#include <unistd.h> // método para abrir arquivos
#include <dirent.h> // usado para teste se tem um diretório como argumento ou não

using namespace std;

int main(int arg, char** args){
    if(args[3] == nullptr && opendir(args[2]) == NULL) rename(args[1], args[2]); // se houver 2 argumentos e nenhum for um diretório, mude o nome do arquivo para o nome especificado
    else{
        int olddir = open(get_current_dir_name(), O_RDONLY); // abre o atual diretório, pegando seu 'fd'
        chdir(args[arg - 1]); // muda o diretório atual para o que receberá os arquivos
        int newdir = open(get_current_dir_name(), O_RDONLY); // abre o diretório que receberá os arquivos
        for(int i = 1; i < arg - 1; ++i) renameat(olddir, args[i], newdir, args[i]); // para cada arquivo especificado como parâmetro, mude-o de lugar para o diretório especificado com o mesmo nome
    }
}
>>>>>>> e4f51742789ae5520e90f8166663228d1a8ba03c
