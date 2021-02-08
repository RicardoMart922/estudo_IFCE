/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (MASCULINO ou FEMININO) de
*    N pessoas e calcule e escreva: 
*    a) A maior e a menor altura do grupo e de quem é esta altura (Se HOMEM ou MULHER); 
*    b) A média de altura entre as mulheres e a média entre as alturas dos homens; 
*    c) O número de homens e a diferença percentual entre estes e as mulheres. 
*    Obs1. Validar os dados. 
*    Obs2. Utilizar o laço de repetição for.
*/

#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numeroPessoas = 0, sexo = 0, i = 0, homens = 1, mulheres = 1, quantidadeMulheres = 0, quantidadeHomens = 0;
    float altura = 0.0, diferenca = 0.0;
    float maiorAlturaMulheres = 0.0, menorAlturaMulheres = 0.0, maiorAlturaHomens = 0.0, menorAlturaHomens = 0.0; 
    float mediaAlturaMulheres = 0.0, mediaAlturaHomens = 0.0;
    float mediaMulheres = 0.0, mediaHomens = 0.0;

    printf("Informe o número de pessoas: ");
    scanf("%d", &numeroPessoas);

    printf("[1] para feminino e [2] para masculino.\n");
    printf("Informe o sexo da pessoa: \n");
    for (i = 0; i <= numeroPessoas; i++) {
        scanf("%d", &sexo);

        switch (sexo) {
            case 1:
                quantidadeMulheres = quantidadeMulheres + 1;

                printf("Informe a altura em metros: ");
                do{
                    scanf("%f", &altura);
                    if(altura <= 0.0 || altura > 2.0){
                        printf("\nInformação inválida.");
                    }
                }while(altura <= 0.0 || altura > 2.0);
            
            
                mediaAlturaMulheres = mediaAlturaMulheres + altura;
                if(mulheres == 1){
                    maiorAlturaMulheres = altura;
                    menorAlturaMulheres = altura;
                    mulheres++;
                }else{
                    if(altura > maiorAlturaMulheres){
                        maiorAlturaMulheres = altura;
                    }
                    if(altura < menorAlturaMulheres){
                        menorAlturaMulheres = altura;
                    }
                }

                break;
            case 2:
                quantidadeHomens = quantidadeHomens + 1;

                printf("Informe a altura em metros: ");
                do{
                    scanf("%f", &altura);
                    if(altura <= 0.0 || altura > 2.0){
                        printf("\nInformação inválida.");
                    }
                }while(altura <= 0.0 || altura > 2.0);

                mediaAlturaHomens = mediaAlturaHomens + altura; 
                if(homens == 1){
                    maiorAlturaHomens = altura;
                    menorAlturaHomens = altura;
                    homens++;
                }else{
                    if(altura > maiorAlturaHomens){
                        maiorAlturaHomens = altura;
                    }
                    if(altura < menorAlturaHomens){
                        menorAlturaHomens = altura;
                    }
                }
                break;
            default: 
                printf("Informação inválida.");
                printf("Informe o sexo da pessoa: \n");
            break;
        }
        printf("Informe o sexo da pessoa: \n");
    }
    
    if (maiorAlturaHomens > maiorAlturaMulheres) {
        printf("\nA pessoa com maior altura do grupo é um Homem com %.2f m\n", maiorAlturaHomens);
    } else {
        printf("\nA pessoa com maior altura do grupo é uma Mulher com %.2f m\n", maiorAlturaMulheres);
    }
    if (menorAlturaHomens < menorAlturaMulheres) {
        printf("\nA pessoa com menor altura do grupo é um Homem com %.2f m\n", menorAlturaHomens);
    } else {
        printf("\nA pessoa com menor altura do grupo é uma Mulher com %.2f m\n", menorAlturaMulheres);
    }

    mediaMulheres = mediaAlturaMulheres/quantidadeMulheres;
    printf("\nA média de altura das mulheres é %.2f \n", mediaMulheres);

    mediaHomens = mediaAlturaHomens/quantidadeHomens;
    printf("\nA média de altura dos homens é %.2f \n", mediaHomens);

    diferenca = ((quantidadeHomens*100/numeroPessoas) - (quantidadeMulheres*100/numeroPessoas));
    printf("\nA diferença percentual entre homens e mulheres é %.2f porcento. \n", diferenca);

    return 1;
}