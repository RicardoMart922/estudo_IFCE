/*
4 - Faça um programa que receba três números e mostre o maior
 */
#include <stdio.h>

int main() {
    float numero1 = 0.0, numero2 = 0.0, numero3 = 0.0;
        
    printf("Primeiro numero: ");
    scanf("%f", &numero1);
        
    printf("Segundo numero: ");
    scanf("%f", &numero2);
        
    printf("Terceiro numero: ");
    scanf("%f", &numero3);
        
    if (numero1 > numero2 && numero1 > numero3) {
        printf("O %.2f e maior que os demais!\n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("O %.2f é maior que os demias!\n", numero2);
    } else if (numero3 > numero1 && numero3 > numero2) {
        printf("O %.2f é maior que os demais!\n", numero3);
    }
    
    return 1;
}