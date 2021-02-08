/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Construa uma função recursiva com passagem de parâmetro que receba a quantidade de número para 
*    uma sequência de fibonacci e em seguida exiba a sequência.
*    Obs.: Não aceitar como entrada valores menores que 1 nem maiores que 20.
*/

#include <stdio.h>
#include <windows.h>

int fibonacci(int n);

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int numero = 0, i = 0, fib = 0;

    printf("\nDigite a quantidade de número para a sequência de fibonacci: ");
    do {
        scanf("%d", &numero);
        if (numero < 1 || numero > 20) {
            printf("\nInforme um número maior que 1 e menor que 20.\n");
        }
    } while (numero < 1 || numero > 20);

    printf("|");
    for (i = 0; i < numero; i++) {
        fib = fibonacci(i);
        printf(" %d |", fib);
    }
    return 0;
}

int fibonacci(int n) {
    if (n == 0 ) {
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}