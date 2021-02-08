/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Elabore uma matriz 3X3, preencha com nome de frutas em seguida exiba os resultados.
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    char mFrutas[9][20];
    int i = 0;

    printf("Preencha com nomes de 9 frutas: ");
    for(i = 0; i < 9; i++){
        printf("%iº fruta: ", i+1);
        scanf("%s", &mFrutas[i]);
    }
    
    printf("\n");
    
    for(i = 0; i < 9; i++){
        printf("%iº %s  \n",i+1, mFrutas[i]);
    }

    return 0;
}