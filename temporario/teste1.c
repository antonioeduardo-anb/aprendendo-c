#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoNascimento;
    int idade;
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);
    idade = 2026 - anoNascimento;
    printf("voce tem %d anos \n", idade);

    return 0;
}