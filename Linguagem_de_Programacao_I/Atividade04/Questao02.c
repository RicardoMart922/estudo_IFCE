/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Elabore um algoritmo que receba um número qualquer via teclado e informe se o mesmo é primo.
*    Obs1. Utilize o laço de repetição, while(condicao).
*    Obs2. Validar o número, não pode ser menor ou igual a Zero.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero = 0, i = 1;
    int primo = 0;

    printf("\nDigite um número: ");
    do{
        scanf("%i", &numero);
        if(numero <= 0){
            printf("\nNúmero inválido. Tente um número válido.\n");
            printf("Número: ");
        }
    }while(numero <= 0);

    while(numero >= i){
        if(numero%i == 0){
            primo++;
        }
        i++;
    }
    
    if(primo == 2){
        printf("O %i é primo.", numero);
    }else{
        printf("O %i não é primo.", numero);
    }

    

    return 0;
}