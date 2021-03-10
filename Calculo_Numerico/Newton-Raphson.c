#include <windows.h>
#include <stdio.h>
#include <math.h>

#define CONST 100
#define N 1000

double MetodoNewton(double a, double b, double precisao);
double Funcao(double x);
double Derivada(double x);
double Modulo(double valor);
int Iteracao();

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double a = 0.0, b = 0.0, precisao = 0.0, raiz = 0.0;
    int i = 0;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    do {
        printf("Digite o valor da precisão: ");
        scanf("%lf", &precisao);
        if (precisao <= 0) {
            printf("Error.\n");
        }
    } while (precisao <= 0);

    printf("raiz = %lf\n", raiz = MetodoNewton(a, b, precisao));
    printf("O numero de iterações = %d", i = Iteracao());

    return 0;
}

double MetodoNewton(double a, double b, double precisao) {

    int iteracao = 0;
    double x0 = 0.0, x1 = 0.0;

    x0 = ((a + b)/2.0);

    if (Modulo(Funcao(x0)) < precisao) {
        return x0;
    }

    iteracao = 1;

    
    while (iteracao <= CONST) {

        x1 = (x0 - (Funcao(x0)/Derivada(x0)));

        if (Modulo(Funcao(x1) < precisao || Modulo(x1 - x0) < precisao)) {
            return x1;
        }

        x0 = x1;
        
        ++iteracao;
        Iteracao();
    }
    
    return x1;
}

double Funcao(double x) {
    /*
    * Função: f(x) = e^x - cos^2(x)
    * */
    int i = 0, j = 0;
    double fat = 0.0, E = 1.0;
    /*Número de Euler*/
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
    /*Número de Euler*/
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
        valor = (valor * (-1));
        return valor;
    } else {
        return valor;
    }
}

int Iteracao() {
    int i = 0;
    i = i + 1;
    return i;
}