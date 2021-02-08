/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 4. Construa uma função que monte um vetor de 30 posições de inteiros e retorne o menor valor informado.
*    Obs.: Os valores devem ser informados pelo usuário.
*/

#include <stdio.h>
#include <windows.h>

int menorValor();

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int menor = menorValor();

    printf("O menor valor informado foi %d\n", menor);

    return 0;
}

int menorValor() {
    int vetor[30];
    int menor = 0, i = 0;
    printf("Informe os 30 valores: \n");
    for (i = 0; i < 30; i++) {
        printf("%dº:", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 30; i++) {
        if (i == 0) {
            menor = vetor[i];
        } else {
            if (menor > vetor[i]) {
                menor = vetor[i];
            }
        }
    }
    return menor;
}