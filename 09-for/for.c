#include <stdio.h>
#include <stdlib.h>

int main() {
    // 
    int a, b, c;
    printf("Digite dois numeros: ");

    scanf("%d %d", &a, &b);

    //for inicial; condição; incremento
    for (c = a; c < b; c++){
        printf("%d\n", c);
    }
    
    return 0;
}