#include <stdio.h>
#include <stdlib.h>

int main(){
    // while repete o bloco enquanto a condição for verdadeira

    int a, b;
    printf("Digite dois numeros ");
    scanf("%d %d", &a, &b);

    while (a < b){
        a ++;
        printf("%d %d\n", a, b);
    }



    return 0; 
}

