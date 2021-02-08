/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Escreva um algoritmo de ajuda para vendedores de um departamento de roupas de um shopping center.
*    A partir de um valor total recebido do teclado, o sistema deverá exibir as seguintes opções para o cliente:
*    a) O valor total a pagar com desconto de 7,67%;
*    b) O valor de cada parcela, no parcelamento em 4 x com acréscimo de juros de 4,78% sobre o valor total da venda;
*    c) A comissão do vendedor, de 3,6% sobre o valor com desconto, quando vendido à vista;
*    d) A comissão do vendedor, de 4,65% quando vendido a prazo, sobre o valor total da venda.
*/

#include <stdio.h>
#include <windows.h>

#define DESCONTO 0.0767
#define DESCONTOPARCELA 0.0478
#define COMISSAOVENDEDOR1 0.036
#define COMISSAOVENDEDOR2 0.0465

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float valorTotal = 0.0, valorTotalDesconto = 0.0, valorDescontoParcela = 0.0;
    float comissaoVendedor1 = 0.0, comissaoVendedor2 = 0.0;
    int opcao = 0;

    printf("Informe o valor total das suas compras: \n");
    printf("R$: ");
    scanf("%f", &valorTotal);

    printf("==========================================");
    printf("============Formas de pagameto============");
    printf("1 - O valor total com desconto de 7,67%%;\n");
    printf("2 - Parcelamento em 4 vezes com acréscimo de juros de 4,78%% sobre o valor total da venda;\n");
    printf("3 - A comissão do vendedor, de 3,6%% sobre o valor com desconto, quando à vista;\n");
    printf("4 - A comissão do vendedor, de 4,65%% sobre o valor total da venda, quando vendido a prazo;\n");
    printf("==========================================");

    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: 
            valorTotalDesconto = valorTotal - (valorTotal * DESCONTO);
            printf("Valor da compra: R$ %.2f\n", valorTotalDesconto);
            break;
        case 2:
            valorDescontoParcela = (valorTotal + (valorTotal * DESCONTOPARCELA))/4.0;
            printf("Valor da parcela: R$ %.2f\n", valorDescontoParcela);
            break;
        case 3:
            comissaoVendedor1 = valorTotalDesconto * DESCONTO * COMISSAOVENDEDOR1;
            printf("A comissão do vendedor: R$ %.2f\n", comissaoVendedor1);
            break;
        case 4:
            comissaoVendedor2 = valorTotal * COMISSAOVENDEDOR2;
            printf("A comissão do vendedor: R$ %.2f\n", comissaoVendedor2);
            break;
        default: 
            printf("Opção inválida!\n");
            break;

    }

    return 1;
}