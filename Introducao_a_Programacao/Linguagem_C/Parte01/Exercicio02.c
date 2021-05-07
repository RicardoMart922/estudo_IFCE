/*
02 - Faça um programa que receba três números, calcule e mostre a multiplicação
desses números.
*/
#include <stdio.h>

int main() {
    float numero1 = 0.0, numero2 = 0.0, numero3 = 0.0, produto = 0.0;

    printf("Primeiro numero: ");
    scanf("%f", &numero1);

    printf("Segundo numero: ");
    scanf("%f", &numero2);

    printf("Terceiro numero: ");
    scanf("%f", &numero2);

    produto = numero1 * numero2 * numero3;

    printf("%.2f X %.2f X %.2f = %.2f\n", numero1, numero2, numero3, produto);

    return 1;
}