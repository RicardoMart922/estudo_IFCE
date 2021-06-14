#include <stdio.h>

#define MAX 100

double modulo(double valor);
void imprimir(int k, double x1, double x2, double x3, double x4, double erro);

int main() {
    // X inicial
    double x1 = 0.35, x2 = -2.08, x3 = 5, x4 = -0.2;
    
    // Conjunto solução
    double resultado1, resultado2, resultado3, resultado4;
    
    double resultadoX[4], resultadoXK[4];
    double erro, maiorXK, maiorX;

    int i = 1, j = 0;

    printf("k |   x1   |   x2    |   x3   |   x4    |  erro  \n");

    while (i < MAX) {

        resultado1 = (0.7 - x2 + 0.1 * x3 - 0.5 * x4) / 2;
        resultado2 = (-7.7 - 0.6 * resultado1 + 0.6 * x3 + 0.1 * x4) / 3.7;
        resultado3 = (5 + 0.1 * resultado1 + 0.2 * resultado2 - 0.3 * x4);
        resultado4 = (-1 - resultado1 - 1.2 * resultado2 - 0.2 * resultado3) / 5;

        // xk
        resultadoXK[0] = resultado1;
        resultadoXK[1] = resultado2;
        resultadoXK[2] = resultado3;
        resultadoXK[3] = resultado4;

        // xk - (xk-1)
        resultadoX[0] = resultado1 - x1;
        resultadoX[1] = resultado2 - x2;
        resultadoX[2] = resultado3 - x3;
        resultadoX[3] = resultado4 - x4;

        // Maior entre xk - (xk-1)
        maiorX = modulo(resultadoX[0]);
        for (j = 1; j < 4; j++) {
            if (maiorX < modulo(resultadoX[j])) {
                maiorX = modulo(resultadoX[j]);
            } 
        }
        
        // Maior entre xk
        maiorXK = modulo(resultadoXK[0]);
        for (j = 1; j < 4; j++) {
            if (maiorXK < modulo(resultadoXK[j])) {
                maiorXK = modulo(resultadoXK[j]);
            } 
        }

        erro = maiorX / maiorXK;
        
        imprimir(i, resultado1, resultado2, resultado3, resultado4, erro);
        
        if (erro < 0.001) {
            break;
        }

        i++;

        x1 = resultado1;
        x2 = resultado2;
        x3 = resultado3;
        x4 = resultado4;

    }

    return 1;
}

double modulo(double valor) {
    if (valor < 0) {
        return valor * (-1);
    } else {
        return valor;
    }
}

void imprimir(int k, double x1, double x2, double x3, double x4, double erro) {
    printf("%d | %.4lf | %.4lf | %.4lf | %.4lf | %.6lf \n", k, x1, x2, x3, x4, erro);
}