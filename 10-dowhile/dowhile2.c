#include <stdio.h>
#include <stdlib.h>

int main(){
    int i =0;
    
    do{
        printf("Digite uma opção: \n");
        printf("(1)opção: \n");
        printf("(2)opção: \n");
        printf("(3)opção: \n");
        scanf("%d", &i);
        
    }while(i < 0 || i > 3);
    printf("vc escolheu a %d\n", i);
    
    return 0;
}