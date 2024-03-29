#include <time.h> // recuperação de tempo atual
#include <iostream> // saída de dados

using namespace std;

int main(){
    int h = time(NULL) / 3600 % 24 - 3; // time() - retorna tempo em segundos desde 00:00 do dia 01/01/1970, no fuso horário 0, por isso subtração de tempo - 3
    h = h < 0 ? 24 + h : h; // formatação para hora entre 00 e 23
    int m = time(NULL) / 60 % 60; // minutos recuperados
    cout << h << ':' << m << endl; // mostra a hora e minutos atuais
}
