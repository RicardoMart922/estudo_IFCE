/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Faça um programa que leia um número inteiro e imprima o seu antecedente e o seu sucessor.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int numero = 0;

    printf("Insira um número inteiro: ");
    scanf("%i", &numero);

    printf("Seu antecedente: %i\n", numero-1);
    printf("Seu sucessor: %i\n", numero+1);

    return 0;
}