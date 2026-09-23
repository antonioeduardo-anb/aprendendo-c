#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, c;
    printf("digite dois numeros: ");
    scanf("%d %d", &a, &b);

    for (c = a; c <= b && c > 0; c++ ){
        printf("%d\n", c);
    }


    return 0;
}