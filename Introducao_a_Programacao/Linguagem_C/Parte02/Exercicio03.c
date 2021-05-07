/*
3 - Faça um programa que receba dois números e mostre o menor.
 */
#include <stdio.h>

int main() {
    float numero1 = 0.00, numero2 = 0.00;
        
    printf("Primeiro numero: ");
    scanf("%f", &numero1);
        
    printf("Segundo numero: ");
    scanf("%f", &numero2);
        
    if (numero1 > numero2) {
        printf("O %.2f e maior que %.2f\n", numero1, numero2);
    } else {
        printf("O %.2f e maior que %.2f\n", numero2, numero1);
    }
    
    return 1;
}