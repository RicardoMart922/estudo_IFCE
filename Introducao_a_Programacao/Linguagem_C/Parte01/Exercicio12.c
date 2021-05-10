/*
12 - Faça um programa que receba o valor do salário mínimo e o valor do salário 
de um funcionário, calcule e mostre a quantidade de salários mínimos que esse 
funcionário ganha.
 */
#include <stdio.h>

int main() {
    float salarioMinimo = 0.0, salarioFuncionario = 0.0;
    int qtdSalarioMinimo = 0;
        
    printf("Digite o valor do salario minimo: R$");
    scanf("%f", &salarioMinimo);
        
    printf("Digite o valor do salario do funcionario: R$");
    scanf("%f", &salarioFuncionario);
        
    qtdSalarioMinimo = salarioFuncionario / salarioMinimo;
        
    printf("A quantidade de salarios e %d\n", qtdSalarioMinimo);
        
    return 1;
}