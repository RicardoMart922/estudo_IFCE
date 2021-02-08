/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 5. Faça um algoritmo para ler doze números inteiros quaisquer. Em seguida mostrar a média aritmética
*    dos 4 primeiros, depois a média ponderada dos 4 seguintes e por último a média geométrica dos 4 
*    últimos números. Por fim tire a média aritmética das 3 médias.
*/

#include <stdio.h>
#include <windows.h>
#include <math.h>

#define MAXIMO1 12
#define MAXIMO2 4

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numeros[MAXIMO1], peso[MAXIMO2], i = 0, somaPeso = 0, produto = 0;
    float media = 0.0, mediaAritmetica = 0.0, mediaGeometrica = 0.0, mediaPonderada = 0.0;

    printf("Informe 12 números: \n");
    for (i = 0; i < MAXIMO1; i++) {
        printf("%d - Número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nInsira os pesos para a média ponderada: ");
    for (i = 0; i < MAXIMO2; i++) {
        printf("%d - Peso: ", i+1);
        scanf("%d", &peso[i]);
    }

    mediaAritmetica = ((numeros[0] + numeros[1] + numeros[2] + numeros[3])/4.0);
    
    somaPeso = (peso[0] + peso[1] + peso[2] + peso[3]);
    mediaPonderada = (((numeros[4] * peso[0]) + (numeros[5] * peso[1]) + (numeros[6] * peso[2]) + (numeros[7] * peso[3]))/somaPeso);

    produto = (numeros[8] * numeros[9] * numeros[10] * numeros[11]);
    mediaGeometrica = pow(produto, 0.25);

    media = ((mediaAritmetica + mediaPonderada + mediaGeometrica)/3.0);

    printf("\nMédia aritmética: %.2f", mediaAritmetica);
    printf("\nMédia ponderada: %.2f", mediaPonderada);
    printf("\nMédia geométrica: %.2f", mediaGeometrica);
    printf("\nMédia das médias: %.2f", media);

    return 1;
}