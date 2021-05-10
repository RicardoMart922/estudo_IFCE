/*
11 - Faça um programa que calcule e mostre a área de um losango.
 */
#include <stdio.h>

int main() {
    float diagonalMaior = 0.0, diagonalMenor = 0.0, area = 0.0;
        
    printf("Digite o valor da diagonal maior: ");
    scanf("%f", &diagonalMaior);
        
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonalMenor);
        
    area = (diagonalMaior * diagonalMenor) / 2;
        
    printf("A area do losango e %.2f m²\n", area);

    return 1;
}