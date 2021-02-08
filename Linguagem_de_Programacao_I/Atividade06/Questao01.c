/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa uma função que receba um valor inteiro positivo e retorne o fatorial desse número.
*    Obs1.: 0! ou 1! = 1
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int fatc(int n);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero = 0, fatorial = 0;

    printf("\nInsira o número para o cálculo do fatorial: ");
    scanf("%i", &numero);

    fatorial = fatc(numero);

    printf("\n%i! = %i", numero, fatorial);

    return 0;
}

int fatc(int n){
    int f = 1, i = 0;
    if((n == 0) || (n == 1)){
        return f;
    }else{
        for(i = n; i > 1; i--){
            f *= i;
        }
        return f;
    }
}