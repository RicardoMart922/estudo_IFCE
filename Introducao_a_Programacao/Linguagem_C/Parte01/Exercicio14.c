/*
14 - Faça um programa que receba o ano de nascimento de uma pessoa e o ano 
atual, calcule e mostre: 
a) a idade dessa pessoa em anos; 
b) a idade dessa pessoa em meses; 
c) a idade dessa pessoa em dias; 
d) a idade dessa pessoa em semanas. 
 */
#include <stdio.h>

int main() {
    int anoNascimento = 0, anoAtual = 0;
    float idadeAnos = 0.0, idadeMeses = 0.0, idadeDias = 0.0, idadeSemanas = 0.0;
        
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);
        
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
        
    // a) a idade dessa pessoa em anos; 
    idadeAnos = anoAtual - anoNascimento;
    printf("Voce tem %f anos de idade.\n", idadeAnos);
        
    // b) a idade dessa pessoa em meses; 
    idadeMeses = idadeAnos * 12;
    printf("Voce tem %f meses de idade.\n", idadeMeses);
        
    // c) a idade dessa pessoa em dias; 
    idadeDias = idadeAnos * 365;
    printf("Voce tem %f dias de idade.\n", idadeMeses);
        
    // d) a idade dessa pessoa em semanas.
    idadeSemanas = idadeMeses * 4.345;
    printf("Voce tem %f semanas de idade.\n", idadeSemanas);
        
    return 1;
}