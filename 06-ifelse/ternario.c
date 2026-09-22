#include <stdio.h>
#include <stdlib.h>

int main() {
    // operador ternario usado normalmente para fazer atrubuiçoes condicionais
    // variavel = condição ? condição1-true : condição2-false;
    int n1, n2, n3;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um segundo numero: ");
    scanf("%d", &n2);

    // ternario
    n3 = n1 > n2 ? n1 : n2;
    printf("O maior numero é %d\n", n3);

    // omitindo a atribuição
    (n1 > n2) ? printf("O maior numero é %d\n", n1)
             : printf("O maior numero é %d\n", n2);


    return 0;
}