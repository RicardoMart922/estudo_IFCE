/*
15 - João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão 
do atraso, ele deverá pagar multa de 2% sobre cada conta. Faça um programa que 
calcule e mostre quanto restará do salário de João. 
 */
#include <stdio.h>

int main() {
    float salario = 0.0, valorConta1 = 0.0, valorConta2 = 0.0;
        
    printf("Digite o valor do salario: R$");
    scanf("%f", &salario);
        
    printf("Digite o valor da primeira conta: R$");
    scanf("%f", &valorConta1);
        
    printf("Digite o valor da segunda conta: R$");
    scanf("%f", &valorConta2);
        
    valorConta1 = valorConta1 + (valorConta1 * 0.02);
    valorConta2 = valorConta2 + (valorConta2 * 0.02);
    salario = salario - (valorConta1 + valorConta2);
        
    printf("Sobrou R$%.2f do salario de Joao.\n", salario);
    
    return 1;
}