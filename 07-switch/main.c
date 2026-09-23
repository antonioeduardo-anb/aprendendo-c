#include <stdio.h>
#include <stdlib.h>

int main() {
    // testa o valor de uma variavel ou expressão e executa o comando correspondente
    /* 
    switch (expression)
    {
        case valor1: comado; break;
        case valor2: comando; break;
        default: comandos;
    }
*/
    char op;
    printf("digite um simbolo de operação aritmética: ");
    scanf("%c", &op);
    //switch
    switch (op)
    {
        case '+': printf(" + digitado ");break;
        case '-': printf(" - digitado ");break;
        case '*': printf(" * digitado ");break;
        case '/': printf(" / digitado ");break;
        default: printf("Não é um simbolo valido");
    }


    return 0;
}