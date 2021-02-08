/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Estrutura de Dados
* Professor: Nécio de Lima Veras
* Aluno: Ricardo Martins Cordeiro
*
* Escreva um programa capaz de ler uma matriz de tamanho variável (leia: linha, depois coluna).
* Depois de lida a dimensão da matriz, o algoritmo deve ler todos os elementos da matriz, um a um.
* Ao final, o algoritmo deve exibir toda a matriz.
*
* Observe o formato da saída esperada nos casos de teste.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha = 0, coluna = 0, i = 0, j = 0;
    int **matriz;

    scanf("%i\n", &linha);
    scanf("%i\n", &coluna);

    matriz = (int**) malloc(linha*sizeof(int*));
    for(i = 0; i < linha; i++){
        matriz[i] = (int*) malloc(coluna*sizeof(int));
        for(j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(matriz[i][j] < 10){
                printf("0%i", matriz[i][j]);
                printf(" ");
            }else{
                printf("%i", matriz[i][j]);
                printf(" ");
            }
        }printf("\n");
    }

    return 0;
}