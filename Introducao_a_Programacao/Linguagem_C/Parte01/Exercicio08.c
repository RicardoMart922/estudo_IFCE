/*
08 - Faça um programa que receba o peso de uma pessoa em quilos, calcule e 
mostre esse peso em gramas.
 */
#include <stdio.h>

int main() {
    float peso = 0.0;

    printf("Digite o peso em KG: ");
    scanf("%f", &peso);
        
    peso = peso * 1000;
        
    printf("O peso em gramas é %.2f\n", peso);

    return 1;
}