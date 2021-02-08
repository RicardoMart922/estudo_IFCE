/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa uma função com passagem de 2 parâmetros que imprima a soma e multiplicação dos valores informados.
*/

#include <stdio.h>
#include <windows.h>

void Somar_e_Multiplicar(float x, float y);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float numero1 = 0, numero2 = 0;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &numero1);
    printf("\nDigite o segundo número: ");
    scanf("%f", &numero2);

    Somar_e_Multiplicar(numero1, numero2);

    return 0;
}

void Somar_e_Multiplicar(float x, float y){

    float S = 0, P = 0;

    S = (x + y);
    P = (x * y);

    printf("\nSoma: %.2f + %.2f = %.2f\n", x, y, S);

    printf("\nMultiplicação: %.2f X %.2f = %.2f \n", x, y, P);

}