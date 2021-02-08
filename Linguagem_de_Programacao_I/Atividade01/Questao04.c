/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 4.Elabore um algoritmo que calcule e mostra a área de um triângulo, de um quadrado e de um retângulo
*   em seguida exibi-los. Obs. Para os valores de entrada admitir ponto flutuante simples (float).
*/

#include <stdio.h>
#include <windows.h>

float Triangulo(float altura, float base){
    float areaTriangulo = 0.0;

    areaTriangulo = (base*altura)/2;

    return areaTriangulo;
}

float Quadrado(float lado){
    float areaQuadrado = 0.0;

    areaQuadrado = (lado * lado);

    return areaQuadrado;
}

float Retangulo(float lado_01, float lado_02){
    float areaRetangulo = 0.0;

    areaRetangulo = (lado_01 * lado_02);

    return areaRetangulo;
}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float alturaTriangulo = 0.0, baseTriangulo = 0.0;
    float ladoQuadrado = 0.0;
    float larguraRetangulo = 0.0, comprimentoRetangulo = 0.0;
    float areaTriangulo = 0.0, areaQuadrado = 0.0, areaRetangulo = 0.0;
    
    printf("Informe a altura do triângulo: ");
    scanf("%f", &alturaTriangulo);
    printf("Informe a base do triângulo: ");
    scanf("%f", &baseTriangulo);

    printf("A área do Triângulo = %.2f\n", areaTriangulo = Triangulo(alturaTriangulo, baseTriangulo));
    
    printf("\n\nInforme o lado do quadrado: ");
    scanf("%f", &lado_quadrado);

    printf("A área do Quadrado = %.2f\n", areaQuadrado = Quadrado(ladoQuadrado));

    printf("\n\nInforme o comprimento do retângulo: ");
    scanf("%f", &comprimentoRetangulo);
    printf("Informe a largura do retângulo: ");
    scanf("%f", &larguraRetangulo);

    printf("\A área do Retângulo = %.2f\n", areaRetangulo = Retangulo(comprimentoRetangulo, larguraRetangulo));
    
    return 0;
}