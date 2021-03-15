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

#define MAX 50
#define N 1000

/* Módulo auxiliar */
double Funcao(double x);

/* Módulo principal */
int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double a = 0.0, b = 0.0, precisao = 0.0, raiz = 0.0, p = 0.0;
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

        p = ((a + b) / 2.0);
        
        if (Funcao(p) == 0 || ((b - a) / 2.0) < precisao) { /* 1º caso: f(p) = 0 */
            printf("Raiz = %lf\n", p);
            break;
        }
    
        i++; 
        
        if (Funcao(p) * Funcao(a) < 0) { /* 2º caso: f(a) * f(p) < 0 */
            b = p;
        } else {                         /* 3º caso: f(p) * f(b) < 0 */
            a = p;
        }
    }

    printf("nº interações = %d\n", i);

    return 1;
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