/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Construa uma função que receba 4 valores e retorno o maior deles.
*/

#include <stdio.h>
#include <windows.h>

float retonar_Maior(float x1, float x2, float x3, float x4);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float numero1 = 0.0, numero2 = 0.0, numero3 = 0.0, numero4 = 0.0, maior = 0.0;

    printf("\nDigite quatro valores: ");
    printf("\n1º Valor: ");
    scanf("%f", &numero1);
    printf("\n2º Valor: ");
    scanf("%f", &numero2);
    printf("\n3º Valor: ");
    scanf("%f", &numero3);
    printf("\n4º Valor: ");
    scanf("%f", &numero4);

    maior = retonar_Maior(numero1, numero2, numero3, numero4);

    printf("\nO maior número informado foi %.2f", maior);

    return 0;
}

float retonar_Maior(float x1, float x2, float x3, float x4){
    
    float M = 0.0;
    if((x1 > x2)&&(x1 > x3)&&(x1 > x4)){
        M = x1;
    }
    if((x2 > x1)&&(x2 > x3)&&(x2 > x4)){
        M = x2;
    }
    if((x3 > x1)&&(x3 > x2)&&(x3 > x4)){
        M = x3;
    }
    if((x4 > x1)&&(x4 > x2)&&(x4 > x3)){
        M = x4;
    }

    return M;
}