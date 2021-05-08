/*
07 - Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. 
 */
#include <stdio.h>

int main() {
    float peso = 0.0;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
        
    peso = peso + (peso * 0.15);
        
    printf("O seu novo peso se voce engorda em 15%% e %.2fkg\n", peso);
        
    peso = peso - (peso * 0.2);
        
    printf("O seu novo peso se voce emagrecer em 20%% e %.2fkg\n", peso);
    
    return 1;
}