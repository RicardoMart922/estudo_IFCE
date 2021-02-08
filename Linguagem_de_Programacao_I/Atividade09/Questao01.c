/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa uma algoritmo que utilizando as funções de manipulação de arquivos, receba uma frase e 
*    grave-o em um arquivo.txt com o nome texto_gravado.txt.
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    FILE *pont_arq = NULL;
    char texto[200];
    int retorno = 0;

    pont_arq = fopen("texto_gravado.txt", "w");
    if (pont_arq == NULL) {
        printf("Erro na abertura!\n");
        exit(1);
    }

    printf("\nInforme uma frase com até 200 caracteres:\n");
    printf("Obs.: Espaços em brancos são considerados caracteres.\n\n");
    printf("Frase: ");
    gets(texto);

    retorno = fputs(texto, pont_arq);

    if (retorno == EOF) {
        printf("Erro de gravação!");
    }
    fclose(pont_arq);

    return 0;
}
