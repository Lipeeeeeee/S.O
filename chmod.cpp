#include <sys/stat.h> // manipulação de status de arquivos

using namespace std;

int main(int arg, char **args){
    int permissions = strtol(args[1], NULL, 8); // variável armazenando as permissões no formato octal, usando a função strtol para converter o parâmetro para um valor octal
    /* POSSIBILIDADES DE PARÂMETROS, SENDO CADA ALGARISMO PARA CADA PROPRIETÁRIO (123 - 1, USUÁRIO / 2, GRUPO / 3, OUTROS)
    ler     escrever     executar
     0    +    0     +      0     -     0, não há permissões   
     0    +    0     +      1     -     1, somente permissão de executar
     0    +    2     +      0     -     2, somente permissão de escrever
     0    +    2     +      1     -     3, permissão de escrever e executar
     4    +    0     +      0     -     4, somente permissão de ler
     4    +    0     +      1     -     5, permissão de ler e executar
     4    +    2     +      0     -     6, permissão de ler e escrever
     4    +    2     +      1     -     7, todas as permissões
    */
    chmod(args[2], permissions); // alterando as permissões do arquivo com a base do parâmetro devidamente alterada para octal
}
