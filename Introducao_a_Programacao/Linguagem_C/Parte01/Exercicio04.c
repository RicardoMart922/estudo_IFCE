/*
04 - Faça um programa que receba duas notas, calcule e mostre a média ponderada 
dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda.
 */

int main() {
    float nota1 = 0.0, nota2 = 0.0, mediaPonderada = 0.0;
        
    printf("Digite a 1º nota: ");
    scanf("%f", &nota1);
        
    printf("Digite a 2º nota: ");
    scanf("%f", nota2);
        
    mediaPonderada = ((2 * nota1) + (3 * nota2)) / 5;
        
    printf("A média ponderada entre %.2f e %.2f é %.2f\n", nota1, nota2, mediaPonderada);
    
    return 1;
}