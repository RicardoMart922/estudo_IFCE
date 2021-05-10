/*
13 - Faça um programa que calcule e mostre a tabuada de um número digitado pelo 
usuário. 
 */
#include <stdio.h>

int main() {
    float numero = 0.0;
        
    printf("Digite um número: ");
    scanf("%f", &numero);
        
    printf("%.2f X 1 = %.2f\n", numero, numero * 1);
    printf("%.2f X 2 = %.2f\n", numero, numero * 2);
    printf("%.2f X 3 = %.2f\n", numero, numero * 3);
    printf("%.2f X 4 = %.2f\n", numero, numero * 4);
    printf("%.2f X 5 = %.2f\n", numero, numero * 5);
    printf("%.2f X 6 = %.2f\n", numero, numero * 6);
    printf("%.2f X 7 = %.2f\n", numero, numero * 7);
    printf("%.2f X 8 = %.2f\n", numero, numero * 8);
    printf("%.2f X 9 = %.2f\n", numero, numero * 9);
    printf("%.2f X 10 = %.2f\n", numero, numero * 10);
    
    return 1;
}