#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("Digite dois valores inteiro: ");
    scanf("%d %d", &a, &b);
    
    do{
        printf("%d\n", a);//executa pelomenos uma vez
        a++;
    }while(a < b);
    
    return 0;
}