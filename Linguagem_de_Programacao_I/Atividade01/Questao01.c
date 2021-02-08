/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1.Construa um algoritmo que receba 3 valores ponto flutuantes simples (float) e em seguida 
*   informe a soma e o produto  entre os mesmos. 
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float numero01 = 0.0, numero02 = 0.0, numero03 = 0.0;
    float soma = 0.0, produto = 0.0;

    printf("Insira um número real: ");
    scanf("%f", &numero01);
    printf("Insira mais um número real: ");
    scanf("%f", &numero02);
    printf("Insira outro número real: ");
    scanf("%f", &numero03);

    soma = (numero01 + numero02 + numero03);

    produto = (numero01 * numero02 * numero03);

    printf("Soma = %.2f\n", soma);
    printf("Produto = %.2f\n", produto);

    return 0;
}