/*
05 - Faça um programa que receba o preço de um produto, calcule e mostre o novo 
preço, sabendo-se que este sofreu um desconto de 10%. 
 */
#include <stdio.h>

int main() {
    double preco = 0.00;
        
    printf("Digite o preço do produto: R$");
    scanf("%f", &preco);
        
    preco = preco - (preco * 0.1);
        
    printf("O novo preço do produto é R$%.2f\n", preco);
        
    return 1;
}