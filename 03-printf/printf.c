#include <stdio.h>
#include <stdlib.h>

int main(){

    char letra = 'A';
    int numero = 12;
    float ponto = 13.25f;          // sufixo 'f' explícito para float

    printf("%c \n", letra);        // %c imprime o caractere ('A')
    printf("%d \n", letra);        // %d imprime o código ASCII do char (65)
    printf("%d \n", numero);       // %d = número inteiro (decimal)
    printf("%.2f \n", ponto);      // %.2f limita a 2 casas decimais (13.25)
                                   // OBS: sem precisão, usa padrão 6 casas

    // Imprimindo tudo em uma única chamada (mais eficiente!)
    printf("letra: %c, numero: %d\n", letra, numero);

    // Expressões matemáticas dentro do printf são avaliadas antes da impressão
    printf("letra: %c, numero+10: %d\n", letra, numero + 10);

    return 0; 
}