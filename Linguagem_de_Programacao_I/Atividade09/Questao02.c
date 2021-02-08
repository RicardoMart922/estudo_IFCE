/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Construa um algoritmo que utilizando as funções de manipulação de arquivos pegue o texto_gravado.txt
*    da questão anterior e leio.
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    FILE *pont_arq = fopen("texto_gravado.txt", "r");
    if (pont_arq == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    char c = fgetc(pont_arq);
    printf("\nFrase: ");
    while (c != EOF) {
       printf("%c", c);
       c = fgetc(pont_arq);
    }
    printf("\n\nFim da leitura.\n");
    fclose(pont_arq);
    return 0;
}