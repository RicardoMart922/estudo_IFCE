/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3.Construa um algoritmo que receba o preço de compra de uma mercadoria e o desconto, em seguida informa
*   o valor da venda com o desconto obtido.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double preco = 0.0, desconto = 0.0;
    double venda = 0.0;

    printf("Informe o valor da compra: ");
    scanf("%lf", &preco);
    printf("Informe o desconto: ");
    scanf("%lf", &desconto);

    venda = preco - (preco * (desconto/100));

    printf("O valor da venda com o desconto é R$%lf\n", venda);

    return 0;
}