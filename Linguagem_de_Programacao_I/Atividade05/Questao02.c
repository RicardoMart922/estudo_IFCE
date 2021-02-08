/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2 Elabore uma matriz quadrada 3x3 e preencha com nomes de animais, em seguida imprima-a.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //Matriz de strings 3X3 
    char nomes_animais[9][20];
    int i = 0;
    
    printf("Informe o nome de nove animais: \n");
    for(i = 0; i < 9; i++ ){
        printf("%dº:", i+1);    
        scanf("%s", nomes_animais[i]);
    }

    printf("\n=========================\n");
    for(i = 0; i < 9; i++){
        printf("%s  ", nomes_animais[i]);
        if(i == 2 || i == 5){
            printf("\n");
        }
    }
    printf("\n=========================\n");
    return 0;
}