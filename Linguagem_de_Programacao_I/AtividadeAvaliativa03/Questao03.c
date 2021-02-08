/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Faça uma função que receba, por parâmetro, uma matriz 4x4 de reais e retorna a soma dos
*    elementos das linhas, cuja soma da linha com a coluna seja um número par.
*    Por exemplo: linha 1, coluna 1, (1+1 =2), linha 1, coluna 3, (1+3 = 4).
*    Obs.: Os valores devem ser informados pelo usuário.
*/

#include <stdio.h>
#include <windows.h>

void preencherMatriz(float mat[4][4]);
void imprimirMatriz(float mat[4][4]);
float somarLinhas(float mat[4][4]);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float matriz[4][4];
    float soma = 0;

    preencherMatriz(matriz);

    soma = somarLinhas(matriz);

    imprimirMatriz(matriz);

    printf("A soma das linhas é %.2f\n", soma);

    return 1;
}

void preencherMatriz(float mat[4][4]){
    int i = 0, j = 0, g = 1;
    printf("Informe os elementos para preencher a matriz: \n");
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%iº Elemento: ", g++);
            scanf("%f", &mat[i][j]);
        }
    }
}

void imprimirMatriz(float mat[4][4]){
    int i = 0, j = 0;
    printf("\nMatriz\n");
    for(i = 0; i < 4; i++){
        printf("|");
        for(j = 0; j < 4; j++){
            printf(" %.2f |", mat[i][j]);
        }
        printf("\n");
    }
}

float somarLinhas(float mat[4][4]){
    int i = 0, j = 0;
    float soma = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if((i + j)%2 == 0){
                soma += mat[i][j]; 
            }
        }
    }
    return soma;
}