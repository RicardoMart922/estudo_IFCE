/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2.Elabore um algoritmo que receba 2 valores inteiros e troque-os de posição. Por fim mostre
*   o antes e o depois da troca dos valores.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero01 = 0, numero02 = 0, troca = 0;

    printf("Insira o primeiro número: ");
    scanf("%i", &numero01);
    printf("Insira o segundo número: ");
    scanf("%i", &numero02);

    printf("Antes da troca.\n");
    printf("Número 1: %i\nNúmero 2: %i\n", numero01, numero02);

    troca = numero01;
    numero01 = numero02;
    numero02 = troca;

    printf("\nDepois da troca.\n");
    printf("Número 1: %i\nNúmero 2: %i\n", numero01, numero02);

    return 0;
}