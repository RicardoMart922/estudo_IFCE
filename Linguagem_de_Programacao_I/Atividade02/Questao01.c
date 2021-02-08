/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre: 
*    a) A idade dessa pessoa;
*    b) Quantos anos ela terá em 2021;
*    c) A idade dessa pessoa em dias (considere que um ano possui 365 dias);
*    d) A idade dessa pessoa em meses.
*/

#include <stdio.h>
#include <windows.h>

#define ANO 2021

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int ano_nascimento = 0, ano_atual = 0;
    int idade = 0, idade_dias = 0, idade_meses = 0, anos_2021 = 0, falta_para_2021 = 0;

    printf("Digite o ano que você nasceu: ");
    scanf("%i", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%i", &ano_atual);

    idade = (ano_atual - ano_nascimento);

    falta_para_2021 = (ANO - ano_atual);

    anos_2021 = (idade + falta_para_2021);

    idade_dias = (idade*365);

    idade_meses = (idade*12);

    printf("Sua idade: %i anos.\n", idade);
    printf("Sua idade em 2021 será: %i anos.\n", anos_2021);
    printf("Sua idade em dias: %i dias.\n", idade_dias);
    printf("Sua idade em meses: %i meses.\n", idade_meses);

    return 0;
}
