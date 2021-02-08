/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Desenvolva um algoritmo que calcule o consumo de combustível de um automóvel em uma determinada viagem.
*    O programa deve pedir que o usuário informe:
*    a) Quantos Km tem a viagem de ida e volta.
*    b) Quantos Km o carro faz com um litro de gasolina.
*    c) O preço do Litro de combustível.
*    Como resultado deve ter:
*    a) Quantos litros de combustível serão gastos na viagem ida e volta.
*    b) Quanto em dinheiro será gasto com combustível em dólar, considerano que 1 dólar é R$ 5,53.
*/

#include <stdio.h>
#include <windows.h>

#define DOLAR 5.53

int main() {
    UINT CPAGE_UTF8 = 650001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float totalKM = 0.0, kmLitro = 0.0, precoCombustivel = 0.0;
    float totalCombustivel = 0.0, gastoCombustivel = 0.0;

    printf("Informe o total de quilômetros (ida e volta) da viagem: \n");
    printf("Total de km: ");
    scanf("%f", &totalKM);

    printf("Informe quantos quilômetros o carro faz com 1L de gasolina: \n");
    printf("km/l: ");
    scanf("%f", &kmLitro);

    printf("Informe o preço do litro de combustível: \n");
    printf("R$: ");
    scanf("%f", &precoCombustivel);
    
    totalCombustivel = totalKM/kmLitro;

    gastoCombustivel = (totalCombustivel*precoCombustivel)/DOLAR;

    printf("A quantidade de combustível gasta na viagem foi %.2f.\n", totalCombustivel);
    printf("O tatal gasto na viagem em dólar foi de %.2f.", gastoCombustivel);

    return 1;
}