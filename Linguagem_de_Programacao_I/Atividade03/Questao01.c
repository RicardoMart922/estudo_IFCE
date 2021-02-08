/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa um algoritmo que receba 3 números quaisquer e informe qual é o maior, o menor e se os mesmos são iguais.
*    Obs. Utilizar estrutura de seleção encadeada.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float numero1 = 0.0, numero2 = 0.0, numero3 = 0.0;

    printf("Insira três(3) números quaisquer: ");
    scanf("%f", &numero1);
    scanf("%f", &numero2);
    scanf("%f", &numero3);

    if(numero1 > numero2 && numero3 > numero2 && numero1 > numero3){
        printf("Maior número: %.2f\n", numero1);
        printf("Menor número: %.2f\n", numero2);
    }else if(numero1 > numero2 && numero1 > numero3 && numero2 > numero3){
        printf("Maior número: %.2f\n", numero1);
        printf("Menor número: %.2f\n", numero3);
    } else if(numero2 > numero1 && numero2 > numero3 && numero3 > numero1){
        printf("Maior número: %.2f\n", numero2);
        printf("Menor número: %.2f\n", numero1);
    } else if(numero2 > numero1 && numero2 > numero3 && numero1 > numero3){
        printf("Maior número: %.2f\n", numero2);
        printf("Menor número: %.2f\n", numero3);
    } else if(numero3 > numero1 && numero3 > numero2 && numero2 > numero1){
        printf("Maior número: %.2f\n", numero3);
        printf("Menor número: %.2f\n", numero1);
    } else if(numero3 > numero1 && numero3 > numero2 && numero1 > numero2){
        printf("Maior número: %.2f\n", numero3);
        printf("Menor número: %.2f\n", numero2);
    } else{
        printf("Os números são todos iguais a %.2f\n", numero1);
    }
    return 1;
}