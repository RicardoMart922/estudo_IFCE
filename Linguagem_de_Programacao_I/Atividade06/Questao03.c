/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Observe a tabela abaixo e construa uma estrutura heterogênea para o cadastro de produtos e ao
*    finalizar exiba os dados.
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

    typedef struct cadastro{
        char Nome[30];
        char TipoProd[30];
        int Quant;
        float ValUnit;
    }Cadastro;

void linha();

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    Cadastro produto;

    printf("\nInforme o nome do produto: ");
    gets(produto.Nome);
    printf("\nInforme o tipo do produto: ");
    gets(produto.TipoProd);
    printf("\nInforme a quantidade de produtos: ");
    scanf("%i", &produto.Quant);
    printf("\nInforme o valor unitário do produto: ");
    scanf("%f", &produto.ValUnit);

    printf("\n");
    linha();
    printf("\nInformações registradas do produto: \n");
    printf("NOME: %s\n", produto.Nome);
    printf("TIPO DE PRODUTO: %s\n", produto.TipoProd);
    printf("QUANTIDADE: %i\n", produto.Quant);
    printf("VALOR UNITÁRIO: %.2f\n", produto.ValUnit);
    linha();
    
    return 0;
}

void linha(){
    printf("==============================");
}