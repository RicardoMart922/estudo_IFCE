#include <stdio.h>
#include <math.h>

double FuncaoLinear(int x);
double FuncaoQuadrada(int x);
double ErroQuadrado(double y, double fx);
double Somatorio();

int main() {
    int x = 0, y = 0, opcao = 0, escolha = 0;
    double fx = 0.00;

    printf(">>> [1] Funcao Linear -=- [2] Funcao Quadrada -=- [3] Erro -=- [4] Somatorio <<<\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        while (escolha != 9) {
            printf("Informe o valor de x: ");
            scanf("%d", &x);
            printf("f(x) = %lf\n", FuncaoLinear(x));

            printf(">>> [1] Continuar -=- [9] Parar <<<\n");
            printf("Escolha: ");
            scanf("%d", &escolha);
        }
    } else if (opcao == 2) {
        while (escolha != 9) {
            printf("Informe o valor de x: ");
            scanf("%d", &x);
            printf("f(x) = %lf\n", FuncaoQuadrada(x));

            printf("[1] Continuar -=- [9] Parar\n");
            printf("Escolha: ");
            scanf("%d", &escolha);
        }
    } else if (opcao == 3) {
        while (escolha != 9) {
            printf("Informe o valor de y: ");
            scanf("%d", &y);

            printf("Informe o valor de f(x): ");
            scanf("%lf", &fx);

            printf("Erro = %lf\n", ErroQuadrado(y, fx));

            printf("[1] Continuar -=- [9] Parar\n");
            printf("Escolha: ");
            scanf("%d", &escolha);
        }
    } else if (opcao == 4) {
        printf("Erro = %lf\n", Somatorio());
    }
    return 1;
}

double FuncaoLinear(int x) {
    return (6.5256173913 * x + 10.173913043);
}

double FuncaoQuadrada(int x) {
    return (0.25387755 * pow(x, 2) + 6.6204081633 * x + 9.6440816327);
}

double ErroQuadrado(double y, double fx) {
    return pow((y - fx), 2);
}

double Somatorio() {
    double erro1 = 0.00, erro2 = 0.00, erro3 = 0.00, erro4 = 0.00, erro5 = 0.00, Erro = 0.00;

    printf("Informe os valores dos erros encontrados: \n");
    printf("Primeiro Erro = ");
    scanf("%lf", &erro1);
    printf("Segundo Erro = ");
    scanf("%lf", &erro2);
    printf("Terceiro Erro = ");
    scanf("%lf", &erro3);
    printf("Quarto Erro = ");
    scanf("%lf", &erro4);
    printf("Quinto Erro = ");
    scanf("%lf", &erro5);

    Erro = (erro1 + erro2 + erro3 + erro4 + erro5) / 5.0;

    return Erro;
}
