/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Construa uma função que receba um valor inteiro maior que 5 e menor que 10 e imprima um vetor de igual
*    tamanho com valores inteiros informados pelo usuário.
*/

#include <stdio.h>
#include <windows.h>

void imprimir_vetor(int n);

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int numero = 0;
    printf("\nDigite um número entre 5 e 10: ");
    do{
        scanf("%i", &numero);
        if((numero < 5)&&(numero > 10)){
            printf("\nO número informado não estar entre 5 e 10.\nTente outra vez.");
        }
    }while((numero < 5)&&(numero > 10));

    imprimir_vetor(numero);

    return 0;
}

void imprimir_vetor(int n){
    
    int vetor1[6], vetor2[7], vetor3[8], vetor4[9], i = 0;

    if(n == 6){
        printf("\nPreencha o vetor: \n");
        for(i = 0; i < n; i++){
            printf("%iº posição: ", i+1);
            scanf("%i", &vetor1[i]);
        }

        printf("\n==========Vetor==========\n");
        printf("|");
        for(i = 0; i < n; i++){
            printf(" %i |", vetor1[i]);
        }
    }else if(n == 7){
        printf("\nPreencha o vetor: \n");
        for(i = 0; i < n; i++){
            printf("%iº posição: ", i+1);
            scanf("%i", &vetor2[i]);
        }

        printf("\n============Vetor============\n");
        printf("|");
        for(i = 0; i < n; i++){
            printf(" %i |", vetor2[i]);
        }
    }else if(n == 8){
        printf("\nPreencha o vetor: \n");
        for(i = 0; i < n; i++){
            printf("%iº posição: ", i+1);
            scanf("%i", &vetor3[i]);
        }

        printf("\n==============Vetor==============\n");
        printf("|");
        for(i = 0; i < n; i++){
            printf(" %i |", vetor3[i]);
        }
    }else if(n == 9){
        printf("\nPreencha o vetor: \n");
        for(i = 0; i < n; i++){
            printf("%iº posição: ", i+1);
            scanf("%i", &vetor4[i]);
        }

        printf("\n================Vetor================\n");
        printf("|");
        for(i = 0; i < n; i++){
            printf(" %i |", vetor4[i]);
        }
    }

}