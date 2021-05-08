/*
09 - Faça um programa que calcule e mostre a área de um trapézio. 
 */
#include <stdio.h>

int main() {
    float baseMaior = 0.0, baseMenor = 0.0, altura = 0.0, area = 0.0;
        
    printf("Digite o valor da base maior: ");
    scanf("f", &baseMaior);
        
    printf("Digite o valor da base menor: ");
    scanf("%f", &baseMenor);
        
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
        
    area = ((baseMaior + baseMenor) * altura) / 2;
        
    printf("A area do trapezio e %.2f\n", area);
    
    return 1;
}