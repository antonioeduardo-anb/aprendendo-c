#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415 // Definição de macro (pré-processador)

int main() {
    float soma = PI + 1;
    printf("imprimindo cosntante %f \n", PI);
    printf("imprimindo soma %f \n", soma);
    // PI = 5.25  // ❌ ERRADO — macro não é variável

    return 0;
}