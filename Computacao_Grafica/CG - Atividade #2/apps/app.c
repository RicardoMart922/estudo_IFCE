#include <stdio.h>
#include <stdlib.h>
#include "../include/Queue.h"

struct ponto {
    int coordenadaX;
    int coordenadaY;
};

typedef struct ponto Ponto;

char** alocaMatriz(int linha, int coluna);
char** liberaMatriz(char **matriz, int coluna);
void imprimiMatriz(int linha, int coluna, char **matriz);

int main() {
    int quantidadeVertices = 0, count;
    int linha, coluna, x, y;
    int coordenada_X, coordenada_Y;
    char vetorLetrasMai[27] ={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 
                              'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 
                              'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 
                              'Y', 'Z'};
    char resp;
    

    Ponto ponto;
    Queue* fila = createQueue();

    
    printf("Informe as dimensoes do plano:\n");
    do {
        printf("X (Minimo 10): ");
        scanf("%i", &linha);
        if (linha < 10)
            printf("Dimensão X invalida!\n");
    } while(linha < 10);
    do {
        printf("Y (Minimo 10): ");
        scanf("%i", &coluna);
        if (coluna < 10)
            printf("Dimensão Y invalida!\n");
    } while(coluna < 10);

    char **matrizGrafica = alocaMatriz(linha, coluna);

    for (int lin = 0; lin < linha; lin++) {
        for (int col = 0; col < coluna; col++) {
            matrizGrafica[lin][col] = '*';
        }
    }

    do {
        printf("Quantidade de Vertices: ");
        scanf("%d", &quantidadeVertices);
    } while (quantidadeVertices <= 0);
    count = 0;
    while (count < quantidadeVertices) {
        do {
            printf("Coordenada X e Y: ");
            scanf("%d %d", &coordenada_X, &coordenada_Y);
                if (coordenada_X < 0 || coordenada_Y < 0) {
                    printf("coordenada invalida!");
                }
                if (coordenada_X > linha || coordenada_Y > coluna) {
                    printf("coordenada invalida!");
                }
                if (coordenada_X == linha) {
                    coordenada_X--;
                }
                if (coordenada_Y == coluna) {
                    coordenada_Y--;
                }
            } while ((coordenada_X < 0 || coordenada_Y < 0) || (coordenada_X > linha || coordenada_Y > coluna));
            ponto.coordenadaX = coordenada_X;
            ponto.coordenadaY = coordenada_Y;
        pushQueue(fila, ponto);
        count++;
    }

    count = 0;
    while (count < quantidadeVertices) {
        x = frontQueue(fila).coordenadaX;
        y = frontQueue(fila).coordenadaY;
        matrizGrafica[x][y] = vetorLetrasMai[count];
        count++;
        popQueue(fila); 
    }

    imprimiMatriz(linha, coluna, matrizGrafica);

    system("pause");
    liberaMatriz(matrizGrafica, coluna);
    destroyQueue(fila);
    return 0;
}

char **alocaMatriz(int linha, int coluna){
    char **m = NULL;
    m = (char**)malloc(linha*sizeof(char*));
    for(int i = 0; i < coluna; i++){
        m[i] = (char*)malloc(coluna*sizeof(char));
    }
    if(m == NULL){
        exit(1);
    }
    return m;
}

char **liberaMatriz(char **mat, int coluna){
    for(int i = 0; i < coluna; i++){
        free(mat[i]);
    }
    free(mat);
    return NULL;
}

void imprimiMatriz(int linha, int coluna, char **mat){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}