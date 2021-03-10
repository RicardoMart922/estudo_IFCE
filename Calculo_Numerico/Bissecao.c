#include <stdio.h>
#include <windows.h>
#include <math.h>

#define MAX 100

double Funcao(double x);

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double a = 0.0, b = 0.0, precisao = 0.0, raiz = 0.0, c = 0.0;
    int i = 0;

    printf("Intervalo [a, b]\n");
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor da precisão: ");
    scanf("%lf", &precisao);


    while (i < MAX) {

        c = ((b + a) / 2);

        if (Funcao(c) == 0 || ((b - a) / 2) < precisao) {
            raiz = c;
            break;
        }
    
        i++;
        
        if (Funcao(c) * Funcao(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    printf("Raiz = %lf\n", raiz);
    printf("Nº interações = %d\n", i);
    return 1;
}

double Funcao(double x) {
    /*
    * Função: f(x) = e^x - cos^2(x)
    * */
    int i = 0, j = 0;
    double fat = 0.0, E = 1.0;
    /*Número de Euler*/
    for (i = 1; i <= MAX; i++) {
        fat = 1;
        for (j = 1; j <= i; j++) {
            fat = fat * j;
        }
        E = (E + (1.0/fat));
    }
    return pow(E, x) - pow(cos(x), 2);
}