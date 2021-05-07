/*
1 - Faça um programa que receba quatro notas de um aluno, calcule e mostre a 
média aritmética das notas e a mensagem de aprovado ou reprovado, considerando 
para aprovação média 7.
 */
#include <stdio.h>

int main() {
    float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0, media = 0.0;
        
    printf("1º nota: ");
    scanf("%f", &nota1);
        
    printf("2º nota: ");
    scanf("%f", &nota2);
        
    printf("3º nota: ");
    scanf("%f", &nota3);
        
    printf("4º nota: ");
    scanf("%f", &nota4);
        
    media = (nota1 + nota2 + nota3 + nota4) / 4;
        
    printf("Média = %.2f\n", media);
        
    if (media >= 7.00) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
        
    return 1;
}