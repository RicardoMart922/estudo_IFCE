/*
10 - Faça um programa que calcule e mostre a área de um quadrado.
 */
#include <stdio.h>

int main() {
    float lado = 0.0, area = 0.0;
        
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
        
    area = lado * lado;
        
    printf("A area do quadrado e %.2f m²\n", area);
        
    return 1;
}