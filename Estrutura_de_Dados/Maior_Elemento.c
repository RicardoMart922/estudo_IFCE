/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Estrutura de Dados
* Professor: Nécio de Lima Veras
* Aluno: Ricardo Martins Cordeiro
*
* Escreva um programa capaz de ler os elementos de um vetor de tamanho fixo (10 elementos) e mostre, ao final,
* o maior elemento.
*/
#include <stdio.h>

int main(){
    int vetor[9];
    int i = 0;
    int maiorNumero = -1, maiorNumero1 = 0;

    for(i = 0; i <= 9; i++){
        scanf("%i", &vetor[i]);
        
        maiorNumero1 = vetor[i]; 
        if(maiorNumero < maiorNumero1){
            maiorNumero = maiorNumero1;
        }
    }
    printf("%d", maiorNumero);
    return 0;
}