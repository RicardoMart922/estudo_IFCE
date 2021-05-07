/*
2 - Faça um programa que receba duas notas, calcule e mostre a média aritmética
e a mensagem que se encontra na tabela a seguir: 
    Média aritmética         Mensagem
      0.0 *----º 3.0    |    Reprovado
      3.0 *----º 7.0    |    Exame
      7.0 *----* 10.0   |    Aprovado
 */
#include <stdio.h>

int main() {
    float nota1 = 0.00, nota2 = 0.00, media = 0.00;
        
    printf("Primeira nota: ");
    scanf("%f", &nota1);
        
    printf("Segunda nota: ");
    scanf("%f", &nota2);
        
    media = (nota1 + nota2) / 2;
        
    printf("Media = %.2f\n", media);
        
    if (media >= 0.0 && media < 3.0) {
        printf("Reprovado!\n");
    } else if (media >= 3.0 && media < 7.0) {
        printf("Exame!\n");
    } else if (media >= 7.0 && media <= 10.0) {
        printf("Aprovado!\n");
    }
    
    return 1;
}