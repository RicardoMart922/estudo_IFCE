/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 1. Construa um algoritmo com o laço de repetição (do... while(condicao);, para calcular o valor do
*    fatorial de um número inteiro e maior ou igual a Zero. Obs. Os número devem ser informados via teclado.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero = 0;
    int i = 1, fatorial = 1;

    printf("\nInsira um número inteiro para o cálculo do fatorial: ");

    do{
        scanf("%i", &numero);
        if(numero < 0){
            printf("\nO número digitado é menor que 0. Tente um número maior ou igual a 0.");
            printf("\nNovo número: ");
        }else{
            for(i = 1; i <= numero; i++){
                if(numero == 0){
                    printf("\n%i! = 1", numero);
                }else{
                    fatorial *= i;
                }
            }
        }
        
    }while(numero < 0);
    
    printf("\n%i! = %i\n", numero, fatorial);
    
    return 0;
}