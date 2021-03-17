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

/* Módulos auxiliares */
double Funcao(double x);
double Modulo(double valor);
void Imprimir(int i, double a, double b, double x, double fa, double fb, double fx, double erro);

/* Módulo principal */
int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double a = 0.0, b = 0.0, precisao = 0.0, raiz = 0.0, p = 0.0, p0 = 0.0, erro = 0.0;
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
    printf("nº |     a     |     b     |    x_n    |    f(a)   |   f(b)   |   f(x_n)  |   erro   |\n");

    while (i <= MAX) {

        p = ((a + b) / 2.0);
        
        erro = Modulo(p - p0);

        Imprimir(i, a, b, p, Funcao(a), Funcao(b), Funcao(p), erro);

        if (erro <= precisao) { 
            printf("Raiz = %lf\n", p);
            break;
        }

        i++; 

        p0 = p;
        
        if (Funcao(p) * Funcao(a) < 0) { 
            b = p;
        } else {                         
            a = p;
        }
    }

    printf("Nº interações = %d\n", i);

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

double Modulo(double valor) {
    if (valor < 0) {
        return valor * (-1);
    } else {
        return valor;
    }
}

void Imprimir(int i, double a, double b, double x, double fa, double fb, double fx, double erro) {
    if (i == 1) {
        printf(" %i | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf |     -    |\n", i, a, b, x, fa, fb, fx);
    }else if (i < 10) {
        printf(" %i | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf |\n", i, a, b, x, fa, fb, fx, erro);
    } else {
        printf("%i | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf | %.6lf |\n", i, a, b, x, fa, fb, fx, erro);
    }
}