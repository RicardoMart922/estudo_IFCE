/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Construa um algoritmo que receba um número inteiro e em seguida com base nele mostre a sequência de fibonacci.
*    Obs1. Não aceitar como entrada valores menores que 2.
*    Obs2. Usar o laço de repetição do{...}whie(..).
*/

#include <stdio.h>
#include <windows.h>

int fibonacci (n) {
    if (n == 0 || n == 1 ){
        return n;
    }else if (n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero = 0, fib = 0, i = 0;
    printf("Digite um número: ");
    do {
        scanf("%d", &numero);
        if (numero < 2) {
            printf("O número deve ser maior que 2.\n");
            printf("Digite um número: ");
        }
    } while(numero < 2);
    printf("A sequência de Fibonacci é: \n");
    for (i = 0; i < numero; i++) {
        fib = fibonacci(i);
        printf("%d, ", fib);
    }
    printf("...");

    return 1;
}