/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Estrutura de Dados
* Professor: Nécio de Lima Veras
* Aluno: Ricardo Martins Cordeiro
*
* Implemente funções que recebam por parâmetro uma matriz capaz de armazenar valores reais e seu tamanho.
* As funções devem seguir a seguinte assinatura: (int linha, int coluna, float *mat).
* O programa deve:
*
* Alocar dinamicamente a matriz;
* Ler os valores da matriz (as dimensões devem ser lidas no programa principal);
* Retornar o cálculo do determinante da matriz;
* Multiplicar a matriz por um valor escalar;
* Exibir a matriz em um formato apropriado.
*/
#include <stdio.h>
#include <stdlib.h>

double calculoDeterminante(int dimensao, double **mat);
double** novaMatriz(int linha, int coluna, int k, double **mat, double **mat2);
double** AlocaMatriz(int linha, int coluna);
double** LiberaMatriz(double **mat, int coluna);
void ImprimiMatriz(int linha, int coluna, double **mat);

int main(){

    int linha = 0, coluna = 0, i = 0, j = 0;
    double **matriz = NULL;
    double det = 0.00;

    scanf("%i", &linha);
    scanf("%i", &coluna);

    matriz = AlocaMatriz(linha, coluna);

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    ImprimiMatriz(linha, coluna, matriz);

    det = calculoDeterminante(coluna, matriz);
    if(det < 0.00){
        det = 0.00;
        printf("Determinante=%.2lf", det);
    }else{
        printf("Determinante=%.2lf", det);
    }

    LiberaMatriz(matriz, coluna);

    return 1;
}
double calculoDeterminante(int dimensao, double **mat){
	double det = 0.0, cofator = 0.0;
	double **mat2 = AlocaMatriz(dimensao-1, dimensao-1);
	int c = 0;
	
	//caso base
	if(dimensao == 1){
		return **mat;
	}
	
	for(c = 0; c < dimensao; c++){
		cofator = (c%2?-1:1) * calculoDeterminante(dimensao-1, novaMatriz(dimensao, dimensao, c, mat, mat2));
		det += mat[0][c]*cofator;
	}

	LiberaMatriz(mat2, dimensao-1);

	return det;
}


double **novaMatriz(int linha, int coluna, int k, double **mat, double **mat2){
    int i = 0, j = 0;
    double **p = mat2, *p2 = NULL;

    for(i = 1; i < linha; i++){
		p2 = *p++;
		for(j = 0; j < coluna; j++)
			if(j==k) continue;
			else *p2++ = mat[i][j];
	}

	return mat2;
}

double **AlocaMatriz(int linha, int coluna){

    double **m = NULL;
    int i = 0;

    m = (double**)malloc(linha*sizeof(double*));
    for(i = 0; i < coluna; i++){
        m[i] = (double*)malloc(coluna*sizeof(double));
    }
    if(m == NULL){
        exit(1);
    }

    return m;
}

double **LiberaMatriz(double **mat, int coluna){
    int i = 0;

    for(i = 0; i < coluna; i++){
        free(mat[i]);
    }
    free(mat);

    return NULL;
}

void ImprimiMatriz(int linha, int coluna, double **mat){

    int i, j;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }

}