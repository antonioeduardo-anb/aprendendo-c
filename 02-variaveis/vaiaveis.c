#include <stdio.h>
#include <stdlib.h>
 
int main() {
    // ** Variáveis Básicas em C ***
    
    char s;          // caractere único (ex: 'A', 1 byte na memória)
    int numero;      // número inteiro (sem parte fracionária, tipicamente 4 bytes)
    float salario;   // ponto flutuante simples (~7 dígitos de precisão, 4 bytes)
    double precos;   // ponto flutuante duplo (~15 dígitos de precisão, 8 bytes)
                         
    //  importante: Variáveis não-inicializadas contêm "lixo de memória" — valores aleatórios residuais

    // ** Inicializando Variáveis **
    int a = 10;              // atribuição direta na declaração (boa prática!)
    float b = 2.22f;         // sufixo 'f' explicita que é float (não double)
    double c = 5.0e3;        // notação científica: 5.0 × 10³ = 5000.0
    
    // Declaração múltipla com inicialização parcial
    int n1, n2 = 60, n3;     // n1 e n3 NÃO inicializados → cuidado!
    
    return 0;
}