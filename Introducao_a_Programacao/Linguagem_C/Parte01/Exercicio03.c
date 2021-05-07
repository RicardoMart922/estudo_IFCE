/*
03 - Faça um programa que receba dois números, calcule e mostre a divisão do 
primeiro número pelo segundo. Sabe-se que o segundo número não pode ser zero, 
portanto, não é necessário se preocupar com validações.
 */
#include <stdio.h>

int main() {
    float numero1 = 0.0, numero2 = 0.0, divisao = 0.0;
        
    printf("Digite um numero: ");
    scanf("%f", &numero1);

    printf("Digite outro numero: ");
    scanf("%f", &numero2);
        
    divisao = numero1 / numero2;
        
    printf("%.2f / %.2f = %.2f\n", numero1, numero2, divisao);
        
    return 1;
}