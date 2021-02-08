/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Escreva uma função que recebes 3 valores reais a, b e c e que verifique se esses valores
*    podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de
*    triângulo formado. Para que a, b e c formem um triângulo é necessário que a seguinte 
*    propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que
*    a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de
*    triângulo formado observando as seguintes definições:
*    i)Triângulo Equilátero: os comprimentos dos 3 lados são iguais. 
*    ii) Triângulo Isósceles: os comprimentos de 2 lados são iguais.
*    iii) Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include <stdio.h>
#include <windows.h>

int triangulo(float a, float b, float c);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float lado1 = 0.0, lado2 = 0.0, lado3 = 0.0; 
    int tipoTriangulo = 0;

    printf("\nInforme os 3 valores reais: \n");
    printf("1º Valor: ");
    scanf("%f", &lado1);
    printf("2º Valor: ");
    scanf("%f", &lado2);
    printf("3º Valor: ");
    scanf("%f", &lado3);

    tipoTriangulo = triangulo(lado1, lado2, lado3);

    if(tipoTriangulo == 1) {
        printf("Triângulo Equilátero.\n");
    } else if (tipoTriangulo == 2) {
        printf("Triângulo Isósceles.\n");
    } else if (tipoTriangulo == 3) {
        printf("Triângulo Escaleno.\n");
    } else if (tipoTriangulo == 4) {
        printf("O valores informados não formam um triângulo.\n");
    }
    return 1;
}

int triangulo(float a, float b, float c) {

    if (((a + b) < c)||((a + c) < b)||(b + c) < a)) {
            return 4;
    } else if (((a + b) > c)) {
        if ((a == b) && (a == c) && (c == b)) {
            return 1;
        }
        else if (((a == b) != c)||((a == c) != b)||((b == c) != a)) {
            return 2;
        }
        else if (((a != b) != c)||((a != c) != b)||((b != c) != a)) {
            return 3;
        }
    } else if (((a + c) > b)) {
        if ((a == b) && (a == c) && (c == b)) {
            return 1;
        }
        else if (((a == b) != c)||((a == c) != b)||((b == c) != a)) {
            return 2;
        }
        else if (((a != b) != c)||((a != c) != b)||((b != c) != a)) {
            return 3;
        }
    } else if (((b + c) > a)) {
        if ((a == b) && (a == c) && (c == b)) {
            return 1;
        }
        else if (((a == b) != c)||((a == c) != b)||((b == c) != a)) {
            return 2;
        }
        else if (((a != b) != c)||((a != c) != b)||((b != c) != a)) {
            return 3;
        }
    }
}