/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Elabore um algoritmo utilizando o case no C para que sejam verificadas as faixas etárias onde:
*    0 .. 3 (bebê);
*    4 .. 10 (criança);
*    11 ..17 (adolescente), e acima de 17 anos adulto, de modo que o usuário digitará o nome e a idade de
*    uma pessoa qualquer.
*    Obs1. Utilizar estrutura de seleção (multipla escolha);
*    Obs2. Validar os dados, ou seja, não aceitar idade menor que Zero ou maior que 125 anos.
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

#define MAXIMO 125
#define MINIMO 0

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    char nome[35];
    int idade = 0;

    printf("Insira o seu ou nome da pessoa a ser verificada: ");
    gets(nome);
    do{
        printf("Insira a idade: ");
        scanf("%i", &idade);
        if(idade < MINIMO || idade > MAXIMO){
            printf("Idade inválida. Tente outra vez.\n");
        }
    }while(idade < MINIMO || idade > MAXIMO);

    switch (idade){
    case 0:
        pprintf("Bebê.\n");
        break;
    case 1:
        printf("Bebê.\n");
        break;
    case 2:
        printf("Bebê.\n");
        break;
    case 3:
        printf("Bebê.\n");
        break;
    case 4:
        printf("Criança.\n");
        break;
    case 5:
        printf("Criança.\n");
        break;
    case 6:
        printf("Criança.\n");
        break;
    case 7:
        printf("Criança.\n");
        break;
    case 8:
        printf("Criança.\n");
        break;
    case 9:
        printf("Criança.\n");
        break;
    case 10:
        printf("Criança.\n");
        break;
    case 11:
        printf("Adolescente.\n");
        break;
    case 12:
        printf("Adolescente.\n");
        break;
    case 13:
        printf("Adolescente.\n");
        break;
    case 14:
        printf("Adolescente.\n");
        break;
    case 15:
        printf("Adolescente.\n");
        break;
    case 16:
        pprintf("Adolescente.\n");
        break;
    case 17:
        printf("Adolescente.\n");
        break;
    default:
        printf("Adulto.\n");
        break;
    }
    return 1;
}