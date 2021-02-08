/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Construa um algoritmo que receba um número inteiro positivo e retorne se o mesmo é par ou ímpar.
*    Obs. Utilizar a estrutura de seleção simples ou composta, ou (simples e composta).
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero = 0;

    do{
        printf("Digite um número inteiro: ");
        scanf("%i", &numero);
        if(numero < 0){
            printf("Número inválido. Tente um número válido.\n");
        }
    }while (numero < 0);
    if(numero % 2 == 0){
        printf("O número digitado é par.\n");
    }else{
        printf("O número digitado é ímpar.\n");
    }
    return 1;
}