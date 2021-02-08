/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 4. Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
*    a) A idade dessa pessoa;
*    b) Quantos anos ela terá em 2090;
*    c) A idade dessa pessoa em dias (considere que um ano possui 365 dias);
*    d) a idade dessa pessoa em meses;
*    e) Tempo de vida em horas;
*    f) Tempo de vida em minutos;
*    g) Tempo de vida em segundos.
*/

#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int anoNascimento = 0, anoAtual = 0;
    int idade = 0, anos2090 = 0, idadeDias = 0, idadeMeses = 0, vidaHoras = 0, vidaMinutos = 0, vidaSegundos = 0;

    printf("Informe o seu ano de nascimento: \n");
    printf("ANO NASCIMETO: ");
    scanf("%d", &anoNascimento);

    printf("Informe o ano atual: \n");
    printf("ANO ATUAL: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    anos2090 = 2090 - anoNascimento;
    idadeDias = idade * 365;
    idadeMeses = idade * 12;
    vidaHoras = idadeDias * 24;
    vidaMinutos = vidaHoras * 60;
    vidaSegundos = vidaMinutos * 60;

    printf("Idade: %d\n", idade);
    printf("Idade em 2090: %d\n", anos2090);
    printf("Idade em dias: %d\n", idadeDias);
    printf("Idade em meses: %d\n", idadeMeses);
    printf("Tempo de vida em horas: %d\n", vidaHoras);
    printf("Tempo de vida em minutos: %d\n", vidaMinutos);
    printf("Tempo de vida em segundos: %d\n", vidaSegundos); 

    return 1;
}