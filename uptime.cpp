#include <sys/sysinfo.h>
#include <iostream>

using namespace std;

int main(){
    struct sysinfo info;
    sysinfo(&info);
    int d = info.uptime / 86400;
    int h = info.uptime % 86400 / 3600;
    int m = info.uptime % 3600 / 60;
    int s = info.uptime % 60;
    cout << d << ':' << h << ':' << m << ':' << s << endl;
}