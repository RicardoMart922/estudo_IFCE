/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa uma função que verifique se um valor informado é perfeito ou não. Um valor é dito
*    perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio,
*    por exemplo: 6 é perfeito, pois 6 = 1 + 2 + 3. A função deve exibir um valor booleano
*    e a mensagem informando que o número é perfeito ou não.
*    Obs.: O número informado deve estar no intervalo de 10 a 500.
*/

#include <stdio.h>
#include <windows.h>

void valorPerfeito(int numero);

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
        
    int numero = 0; 

    printf("\nInforme um número entre 10 e 500: \n");
    do{
        printf("Número: ");
        scanf("%i", &numero);
        if(numero < 10 || numero > 500){
            printf("\nO número informado não estar no intervalo de 10 a 500.\n");
            printf("\nInforme outro número dentro do intervalo.");
        }
    }while(numero < 10 || numero > 500);

    valorPerfeito(numero);
    return 1;
}

void valorPerfeito(int numero) {
    int i = 1, soma = 0;
    for(i = 1; i < numero; i++){
        if(n % i == 0){
            soma += i;
        }
    }
    if(soma == numero){
        printf("True!");
        printf("\nO número %i é perfeito!", n);
    }else{
        printf("False!");
        printf("\no número %i não é perfeito!", n);
    }
}