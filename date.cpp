#include <time.h>
#include <iostream>

using namespace std;

int main(){
    int h = time(NULL) / 3600 % 24 - 3;
    if(h < 0) h = 24 + h;
    int m = time(NULL) / 60 % 60;
    cout << h << ':' << m << endl;
}