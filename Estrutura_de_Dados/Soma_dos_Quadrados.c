/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Estrutura de Dados
* Professor: Nécio de Lima Veras
* Aluno: Ricardo Martins Cordeiro
*
* Escreva um programa que determine a soma dos quadrados dos n primeiros números naturais, onde o n é
* lido pela plataforma.
*/

#include <stdio.h>
int main(){
    int n = 0, soma = 0;

    scanf("%d", &n);

    soma = ((n+1)*(2*n+1)*n)/6;

    printf("%d", soma);

    return 0;
}