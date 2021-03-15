/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 3º semestre - 2020.2
* Disciplina: Cálculo Numérico
* Professor: Lucas Campos
* Equipe 5: Maxwell Silva da Cunha
*           Vitoria de Oliveira Rodrigues
*           Ricardo Martins Cordeiro
*/

#include <stdio.h>
#include <windows.h>
#include <math.h>

#define MAX 100
#define N 1000

/* Módulos auxiliares */
double Funcao(double x);
double Modulo(double valor);

/* Módulo principal */
int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double a = 0.0, b = 0.0, precisao = 0.0, x = 0.0;
    int i = 1;

    printf("Interval [a, b]\n");
    printf("-=--=--=--=--=--=--=--=--=--=--=--=-\n");
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor da precisão: ");
    scanf("%lf", &precisao);
    printf("-=--=--=--=--=--=--=--=--=--=--=--=-\n");
    
    while (i <= MAX) {

        x = (((a * Funcao(b)) - (b * Funcao(a))) / (Funcao(b) - Funcao(a)));

        i++;

        if (Modulo(Funcao(x)) <= precisao) { /* 1º caso: |f(x)| <= 0 */
            printf("Raiz = %lf\n", x);
            break;
        }
        
        if (Funcao(a) * Funcao(x) < 0) {  /* 2º caso: f(a) * f(x) < 0 */
            b = x;
        } else {                          /* 3º caso: f(x) * f(b) < 0 */
            a = x;
        }
    }

    printf("nº interações = %d\n", i);

    return 0;
}

double Funcao(double x) {
    /*
    * Função: f(x) = e^x - cos^2(x)
    * */
    int i = 0, j = 0;
    double fat = 0.0, E = 1.0;
    /* Número de Euler */
    for (i = 1; i <= N; i++) {
        fat = 1;
        for (j = 1; j <= i; j++) {
            fat = fat * j;
        }
        E = (E + (1.0/fat));
    }
    return pow(E, x) - pow(cos(x), 2);
}

double Modulo(double valor) {
    if (valor < 0) {
        valor = (valor * (-1));
        return valor;
    } else {
        return valor;
    }
}