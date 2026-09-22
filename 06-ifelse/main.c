#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    //ler idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18){
        printf("vc é menor de idade\n");
    }else if(idade > 18 && idade < 65) {
        printf("vc é maior de idade\n");
    }else{
        printf("vc é idoso\n");
    }
}

