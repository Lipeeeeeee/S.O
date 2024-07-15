#include <iostream>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>

using namespace std;

int main(int arg, char** args){
    if(args[3] == nullptr && opendir(args[2]) == NULL) rename(args[1], args[2]);
    else{
        cout << get_current_dir_name() << endl;
        int olddir = open(get_current_dir_name(), O_RDONLY);
        chdir(args[arg - 1]);
        cout << get_current_dir_name() << endl;
        int newdir = open(get_current_dir_name(), O_RDONLY);
        cout << olddir << ' ' << newdir << endl;
        for(int i = 1; i < arg - 1; ++i) cout << renameat(olddir, args[i], newdir, args[i]) << endl;
    }
}