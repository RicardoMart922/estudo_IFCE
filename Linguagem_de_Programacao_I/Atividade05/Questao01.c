/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa um vetor de 10 posições de números inteiros, insira os valores via teclado, em seguida
*    imprima-o invertido, ou seja, do último ao primeiro valor informado.
*/

#include <stdio.h>
#include <windows.h>

#define MAXIMO 10

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int vetor[MAXIMO];
    int i = 0;
    
    printf("Insira os valores: \n");
    for(i = 0; i < MAXIMO; i++){
        printf("%dº valo: ", i+1);
        scanf("%i", &vetor[i]);
    }
    printf("\nForma inversa: ");
    for(i = 9; i >= 0; i--){
        printf("\n%i", vetor[i]);
    }
    return 0;
}