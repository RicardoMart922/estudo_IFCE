/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa uma função recursiva com passagem de parâmetro e com retorno que receba um valor
*    inteiro e retorno o fatorial do mesmo. Obs.: não aceitar valores negativos.
*/

#include <stdio.h>
#include <windows.h>

int fatorial(int n);

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero = 0, fator = 0;

    printf("\nDigite o número para o cálculo do fatorial: ");
    do {
        scanf("%d", &numero);
        if (numero < 0) {
            printf("\nDigite um número positivo.\n");
        }
    } while (numero < 0);

    fator = fatorial(numero);

    printf("\n%d! = %d", numero, fator);
    
    return 0;
}

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else { 
        return n * fatorial(n-1); 
    }
}