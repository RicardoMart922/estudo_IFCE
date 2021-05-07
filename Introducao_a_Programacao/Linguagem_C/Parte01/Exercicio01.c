/*
01 - Faça um programa que receba dois números, calcule e mostre a subtração do 
primeiro número pelo segundo.
*/
#include <stdio.h>

int main() {
    float numero1 = 0.0, numero2 = 0.0, subtracao = 0.0;

    printf("Primeiro numero: ");
    scanf("%f", &numero1);

    printf("Segundo numero: ");
    scanf("%f", &numero2);

    subtracao = numero1 - numero2;

    printf("%.2f - %.2f = %.2f\n", numero1, numero2, subtracao);

    return 1;
}