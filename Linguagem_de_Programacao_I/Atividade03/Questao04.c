/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 4. Elabore um algoritmo que receba uma idade e retorne se a mesma é válida.
*    Obs1. A idade será válida se estiver no intervalo de 0 a 125 anos.
*    Obs2. Utilizar estruturas de seleção: simples ou composta, ou ambas.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int idade = 0;

    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if(idade < 0 || idade > 125){
        printf("A idade digitada é inválida.\n");
    }else{
        printf("A idade digitada é válida.\n");
    }
    return 1;
}