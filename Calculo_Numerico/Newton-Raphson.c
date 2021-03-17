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
double Derivada(double x);
double Modulo(double valor);
void Imprimir( double a, double b, double x0, double x1, double erro, int i);

/* Módulo principal */
int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double a = 0.0, b = 0.0, precisao = 0.0, x0 = 0.0, x1 = 0.0, erro = 0.0;
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
    printf("nº|  a |  b |    x_n    |   x_n+1   |   erro   |\n");

    x0 = ((a + b) / 2.0);  

    while (i <= MAX) {

        x1 = (x0 - (Funcao(x0) / Derivada(x0)));  
    
        erro = Modulo(x1 - x0);

        Imprimir(a, b, x0, x1, erro, i);
        
        if ((Modulo(x1 - x0) <= precisao)) { 
            printf("raiz = %lf\n", x1);
            break;
        }
   
        x0 = x1;

        i++;
    }
    
    printf("Nº de iterações = %d\n", i);

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

double Derivada(double x) {
    /*
    * Derivada: e^x + sen(2X)
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
    return pow(E, x) + sin(2 * x);
}

double Modulo(double valor) {
    if (valor < 0) {
        return valor * (-1);
    } else {
        return valor;
    }
}

void Imprimir(double a, double b, double x0, double x1, double erro, int i) {
    printf("%d | %.0lf | %.0lf | %.6lf | %.6lf | %.6lf |\n", i, a, b, x0, x1, erro);
}
