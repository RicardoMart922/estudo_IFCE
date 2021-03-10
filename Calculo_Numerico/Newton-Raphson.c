#include <stdio.h>
#include <math.h>

#define CONST 100
#define N 1000

double MetodoNewton(double aproximacao0, double aproximacao1, double precisao1, double precisao2);
double Funcao(double x);
double Derivada(double x);
double Modulo(double valor);

int main() {

    double aproximacao0 = 0.0, aproximacao1 = 0.0, precisao = 0.0, raiz = 0.0;

    printf("Digite o valor de a: ");
    scanf("%lf", &aproximacao0);
    printf("Digite o valor de b: ");
    scanf("%lf", &aproximacao1);

    do {
        printf("Digite o valor da precisão: ");
        scanf("%lf", &precisao);
        if (precisao <= 0) {
            printf("Error.\n");
        }
    } while (precisao <= 0);

    printf("raiz = %lf\n", raiz = MetodoNewton(aproximacao0, aproximacao1, precisao, precisao));

    return 0;
}

double MetodoNewton(double aproximacao0, double aproximacao1, double precisao1, double precisao2) {

    int interacao = 0;
    double x0 = 0.0, x1 = 0.0;

    x0 = ((aproximacao0 + aproximacao1)/2.0);

    if (Modulo(Funcao(x0)) < precisao1) {
        return x0;
    }

    interacao = 1;
    
    while (interacao <= CONST) {

        x1 = (x0 - (Funcao(x0)/Derivada(x0)));

        if (Modulo(Funcao(x1) < precisao1 || Modulo(x1 - x0) < precisao2)) {
            return x1;
        }

        x0 = x1;
        
        ++interacao;
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