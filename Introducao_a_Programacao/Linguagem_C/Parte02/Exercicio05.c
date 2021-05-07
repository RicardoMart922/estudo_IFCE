/*
5 - Faça um programa que receba dois números e execute as operações listadas a 
seguir, de acordo com a escolha do usuário.
        Escolha do usuário              Operação
            1                           Média entre os números digitados
            2                           Diferença do maior pelo menor
            3                           Produto entre os números digitados
            4                           Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a 
execução do programa. Lembre-se de que, na operação 4, o segundo número deve 
ser diferente de zero.
 */
#include <stdio.h>

int main() {
    float numero1 = 0.0, numero2 = 0.0, resultado = 0.0;
    int opcao = 0;
        
    printf("Primeiro numero: ");
    scanf("%f", &numero1);
        
    printf("Segundo numero: ");
    scanf("%f", &numero2);
        
    if (numero2 == 0.0) {
        printf("O 2º número não pode ser igual a zero!\n");
        exit(1);
    }
        
        
    printf("1 - Media\n");
    printf("2 - Diferenca\n");
    printf("3 - Produto\n");
    printf("4 - Divisao\n");
        
    printf("Opção: ");
    scanf("%d", &opcao);
        
    switch (opcao) {
        case 1:
            resultado = (numero1 + numero2) / 2;
            printf("Media: %.2f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("Diferenca: %.2f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("Produto: %.2f\n", resultado);
            break;
        case 4:
            resultado = numero1 / numero2;
            printf("Divisao: %.2f\n", resultado);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
    
    return 1;
}