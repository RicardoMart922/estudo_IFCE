/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Estrutura de Dados
* Professor: Nécio de Lima Veras
* Aluno: Ricardo Martins Cordeiro
*
* Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo para decidir o número
* de notas de cada valor que deve ser disponibilizado para o cliente que realizou o saque. Um possível critério
* seria o da “distribuição ótima” no sentido de que as notas de menor valor fossem distribuídas em número mínimo possível.
*
* Por exemplo, se a quantia solicitada fosse R$ 87,00, programa deveria indicar uma nota de R$ 50,00, três notas
* de R$ 10,00, uma nota de 
* R$ 5,00 e uma nota de R$ 2,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
* distribuição das notas de acordo com o critério da distribuição ótima. Considere que existem as seguintes
* notas: R$ 100,00 R$ 50,00 R$ 20,00 R$ 10,00 R$ 5,00 R$ 2,00 R$ 1,00
*
* Para a entrada dos dados o algoritmo deve ler APENAS o valor a ser sacado e como saída informar a quantidade
* exata para cada nota (seguindo a * ordem decrescente de notas). Exemplo: 232
* 2
* 0
* 1
* 1
* 0
* 2
* 0
*
* Ou seja: O valor a ser sacado é igual a 232. O sistema retornará o seguinte quantitativo: 2 notas de
* R$ 100,00 0 nota de R$ 50,00 1 nota 
* de R$ 20,00 1 nota de R$ 10,00 0 nota de R$ 5,00 2 notas de R$ 2,00 0 nota de R$ 1,00
*/

#include <stdio.h>
int main(){
    float saque = 0.0;
    int i = 0;

    scanf("%f", &saque);

    if(saque >= 100){
        for( i = 0; saque >= 100; i++){
        saque -= 100;
        }
        printf("%i", i);    
    }else{
        printf("%i", 0);
    }
     
    if(saque >= 50 && saque < 100){
        for( i = 0; saque >= 50; i++){
        saque -= 50;
        }   
        printf("\n%i", i);
    }else{
        printf("\n%i", 0);
    }
    
    if(saque >= 20 && saque < 50){
        for( i = 0; saque >= 20; i++){
        saque -= 20;
        }
        printf("\n%i", i);
    }else{
        printf("\n%i", 0);
    }
    
    if(saque >= 10 && saque < 20){
        for( i = 0; saque >= 10; i++){
        saque -= 10;
        }
        printf("\n%i", i);
    }else{
        printf("\n%i", 0);
    } 
    
    if(saque >= 5 && saque < 10){
        for( i = 0; saque >= 5; i++){
        saque -= 5;
        }
        printf("\n%i", i);
    }else{
        printf("\n%i", 0);
    }
    
    if(saque >= 2 && saque < 5){
        for( i = 0; saque >= 2; i++){
        saque -= 2;
        }
        printf("\n%i", i);
    }else{
        printf("\n%i", 0);
    }
    
    if(saque >= 1 && saque < 2){
        for( i = 0; saque >= 1; i++){
        saque -= 1;
        } 
        printf("\n%i", i);
    }else{
        printf("\n%i", 0);
    }
    
    return 0;
}