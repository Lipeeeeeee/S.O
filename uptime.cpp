#include <sys/times.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    clock_t h = times(NULL) / 100 / 3600 % 24 - 3;
    clock_t m = times(NULL) / 100 / 60 % 60 - 22;
    clock_t s = times(NULL) / 100 % 60 - 10;
    h = h < 0 ? 24 + h : h;
    m = m < 0 ? 60 + m : m;
    s = s < 0 ? 60 + s : s;
    cout << setw(2) << h << ':' << m << ':' << s << endl;
}