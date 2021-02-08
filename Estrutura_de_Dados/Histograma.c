/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Estrutura de Dados
* Professor: Nécio de Lima Veras
* Aluno: Ricardo Martins Cordeiro
*
* Faça uma função que receba como parâmetro um valor numérico e mostre a seguinte tabela de histogramas:
* Elemento   Valor   Histograma
* A                  4           ∗∗∗∗
* B                  2           ∗∗
* C                  8           ∗∗∗∗∗∗∗∗
* D                 12           ∗∗∗∗∗∗∗∗∗∗∗∗
* E                  1           ∗
*
* A quantidade de elementos deve ser lida no programa principal, bem como cada valor do histograma. A
* quantidade de elementos
* será o parâmetro para uma alocação dinâmica do histograma.
*/

#include <stdio.h>
#include <stdlib.h>

int** Histograma(int *linha){
    int **matriz = NULL;

    matriz = (int**) malloc(*linha * sizeof(int*));
    int i = 0;
    for(i = 0; i < *linha; i++){
        matriz[i] = (int*) malloc(1 * sizeof(int));
    }
    return matriz;
}

int main(){
    
    int linha = 0;
    int **mat = NULL;

    scanf("%i",&linha);
    mat = Histograma(&linha);

    if(mat != NULL){
        int i = 0, j = 0;
        for(i = 0; i < linha; i++){
            for(j = 0; j < 1; j++){
                scanf("%i", &mat[i][j]);
            }
        }
    }
    int a = 0;
    int f = 0;
    int h = 0;
    char A = '*';
    char vetor_elemento[10] = {'A','B','C','D','E','F','G','H','I','J'};

    for (f = 0; f < linha; f++){
        a = 0;
        for(h = 0; h < 1; h++){
            printf("%c %i ",vetor_elemento[f], mat[f][h]);
            for(a = 0; a < mat[f][h]; a++){
                printf("%c",A);
            }
            printf("\n");
        }
        
    }

    int g = 0;
    for (g = 0; g < linha; g++){
        free(mat[g]);
    }
    free(mat);
    
    return 0;
}