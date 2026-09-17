#include <stdio.h>
#include <stdlib.h>

int main() {
    // Constante SEMPRE precisa ser inicializada na declaração
    const int numero = 10; // 'const' impede modificação posterior
    int soma = numero + 1;
    printf("Constante %d \n", numero);
    printf("Soma %d", soma);
    // numero = 12; ERRADO, uma constante não muda


    return 0;
}