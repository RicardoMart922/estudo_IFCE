/*
06 - Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
Faça um programa que receba o salário fixo do funcionário e o valor de suas 
vendas, calcule e mostre a comissão e seu salário final.
 */
#include <stdio.h>

int main() {
    float salarioFixo = 0.0, valorVendas = 0.0, comissao = 0.0;

    printf("Digite o salario do funcionario: R$");
    scanf("%f", &salarioFixo);
        
    printf("Digite o valor das vendas do funcionario: R$");
    scanf("%f", &valorVendas);
        
    comissao = (valorVendas * 0.04);
        
    salarioFixo = salarioFixo + comissao;
        
    printf("Comissao: R$%.2f\n", comissao);
    printf("Salario: R$%.2f\n", salarioFixo);
    
    return 1;
}