/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Construa um algoritmo que exiba os números pares e os ímpares entre dois intervalos informados.
*    Por exemplo: intervalo inicial: 3 e intervalo final: 30.
*    Obs1. O intervalo inicial deve ser menor que o intervalo final.
*    Obs2. Validar os intervalos de modo que só aceite o intevalo menor < intervalo maior.
*    Obs3. O intervalo menor assim como o intervalo maior não podem ser Zero (nulo).
*    Obs4. Utilizar o laço de repetição (for).
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int inicial1 = 0, final1 = 0;
    int inicial2 = 0, final2 = 0;

    printf("Insira os dois intervalos: ");
    printf("\nPrimeiro intervalo inicial: ");
    do{
        scanf("%i", &inicial1);
        if(inicial1 <= 0){
            printf("\nIntervalo inicial inválido. Tente um intervalo válido. \nPrimeiro intervalo inicial: ");
        }
    }while(inicial1 <= 0);

    printf("\nPrimeiro intervalo final: ");
    do{
        scanf("%i", &final1);
        if(final1 <= inicial1){
            printf("\nIntervalo inválido. Tente um intervalo válido. \nPrimeiro intervalo final: ");
        }
    }while(final1 <= inicial1);

    printf("\nSegundo intervalo inicial: ");
    do{
        scanf("%i", &inicial2);
        if(inicial2 <= 0){
            printf("\nIntervalo inicial inválido. Tente um intervalo válido. \nSegundo intervalo inicial: ");
        }
    }while(inicial2 <= 0);
    
    printf("\nSegundo intervalo final: ");
    do{
        scanf("%i", &final2);
        if(final2 <= inicial2){
            printf("\nIntervalo inválido. Tente um intervalo válido. \nSegundo intervalo final: ");
        }
    }while(final2 <= inicial2);

    printf("\nNúmeros pares do primeiro intervalo:\n");

    for(inicial1; inicial1 <= final1; inicial1++){
        if(inicial1 % 2 == 0){
            printf("%i\n", inicial1);
        }
    }

    printf("\nNúmeros ímpares do segundo intervalo:\n");

    for(inicial2; inicial2 <= final2; inicial2++){
        if(inicial2 % 2 != 0){
            printf("%i\n", inicial2);
        }
    }

    return 0;
}