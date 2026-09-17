#include <stdio.h>
#include <stdlib.h>

int main() {

    //char letra;
    //int nro;
    //float n;
   // double d;
    // lendo
    //scanf("%c", &letra);
    //scanf("%d", &nro);
   // scanf("%f", &n);
   // scanf("%f", &d);
//system("pause");
    int numero;
    float d;
    printf("Digite dois numeros com espaço: ");
    scanf("%d %f", &numero, &d); // lendo dois numeros
    printf("numeros digitados: %d e %.2f \n", numero, d);


    return 0;
}