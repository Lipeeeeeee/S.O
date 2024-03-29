#include <sys/sysinfo.h> // recupera informações do sistema
#include <iostream> // saída de dados

using namespace std;

int main(){
    struct sysinfo info; // struct com os dados do sistema
    sysinfo(&info); // recuperação de dados na variável 'info'
    int d = info.uptime / 86400; // info.uptime - retorna em segundos o tempo desde a última inicialização do sistema. Formatação dos dias
    int h = info.uptime % 86400 / 3600; // formatação das horas
    int m = info.uptime % 3600 / 60; // formatasção dos minutos
    int s = info.uptime % 60; // formatação dos segundos
    cout << d << ':' << h << ':' << m << ':' << s << endl; // saída em dias:horas:minutos:segundos
}
