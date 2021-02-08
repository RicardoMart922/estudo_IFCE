/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 5. Elabore um algoritmo que receba dois números inteiros e verifique qual o maior e o menor entre eles.
*    Obs. Utilizar a estrutura do operador ternário.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero1 = 0, numero2 = 0;

    printf("Insira dois números inteiros: ");
    scanf("%i", &numero1);
    scanf("%i", &numero2);

    (numero1 > numero2)?printf("Maior número é %i\n", numero1):printf("Maior número é %i\n", numero2);

    return 1;
}