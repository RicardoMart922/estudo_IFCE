/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Construa um algoritmo que receba um grupo de 10 datas (com dia, mês e ano), em seguida informar se a data é válida. 
*    Obs1. Utilizar o laço do{...}while(...).
*    Obs2. Os dados devem ser validados. 
*    Obs3. Ao finalizar, o algoritmo deve perguntar se o usuário quer continuar, em caso afirmativo, iniciar o
*    processo e inserção dos 10 valores caso contrário sair (Usar um laço de repetição para esse processo). 
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    //grupo de 10 datas
    //grupo de dias
    int dia1 = 0, dia2 = 0, dia3 = 0, dia4 = 0, dia5 = 0, dia6 = 0, dia7 = 0, dia8 = 0, dia9 = 0, dia10 = 0;
    //grupo de meses
    int mes1 = 0, mes2 = 0, mes3 = 0, mes4 = 0, mes5 = 0, mes6 = 0, mes7 = 0, mes8 = 0, mes9 = 0, mes10 = 0;
    //grupo de anos
    int ano1 = 0, ano2 = 0, ano3 = 0, ano4 = 0, ano5 = 0, ano6 = 0, ano7 = 0, ano8 = 0, ano9 = 0, ano10 = 0;

    char escolha;
    int opcao = 0;

    do
    {
        printf("\nInsira 10 grupos de datas: \n");
        printf("\nPrimeiro Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia1);
            printf("\nMês: ");
            scanf("%i", &mes1);
            printf("\nAno: ");
            scanf("%i", &ano1);
            if((dia1 <= 0 || dia1 > 31) || (mes1 <= 0 || mes1 > 12) || (ano1 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia1 <= 0 || dia1 > 31) || (mes1 <= 0 || mes1 > 12) || (ano1 < 0));

        printf("Segundo Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia2);
            printf("\nMês: ");
            scanf("%i", &mes2);
            printf("\nAno: ");
            scanf("%i", &ano2);
            if((dia2 <= 0 || dia2 > 31) || (mes2 <= 0 || mes2 > 12) || (ano2 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia2 <= 0 || dia2 > 31) || (mes2 <= 0 || mes2 > 12) || (ano2 < 0));

        printf("Terceiro Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia3);
            printf("\nMês: ");
            scanf("%i", &mes3);
            printf("\nAno: ");
            scanf("%i", &ano3);
            if((dia3 <= 0 || dia3 > 31) || (mes3 <= 0 || mes3 > 12) || (ano3 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia3 <= 0 || dia3 > 31) || (mes3 <= 0 || mes3 > 12) || (ano3 < 0));

        printf("Quarto Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia4);
            printf("\nMês: ");
            scanf("%i", &mes4);
            printf("\nAno: ");
            scanf("%i", &ano4);
            if((dia4 <= 0 || dia4 > 31) || (mes4 <= 0 || mes4 > 12) || (ano4 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia4 <= 0 || dia4 > 31) || (mes4 <= 0 || mes4 > 12) || (ano4 < 0));

        printf("Quinto Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia5);
            printf("\nMês: ");
            scanf("%i", &mes5);
            printf("\nAno: ");
            scanf("%i", &ano5);
            if((dia5 <= 0 || dia5 > 31) || (mes5 <= 0 || mes5 > 12) || (ano5 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia5 <= 0 || dia5 > 31) || (mes5 <= 0 || mes5 > 12) || (ano5 < 0));

        printf("Sexto Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia6);
            printf("\nMês: ");
            scanf("%i", &mes6);
            printf("\nAno: ");
            scanf("%i", &ano6);
            if((dia6 <= 0 || dia6 > 31) || (mes6 <= 0 || mes6 > 12) || (ano6 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia6 <= 0 || dia6 > 31) || (mes6 <= 0 || mes6 > 12) || (ano6 < 0));

        printf("Sétimo Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia7);
            printf("\nMês: ");
            scanf("%i", &mes7);
            printf("\nAno: ");
            scanf("%i", &ano7);
            if((dia7 <= 0 || dia7 > 31) || (mes7 <= 0 || mes7 > 12) || (ano7 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia7 <= 0 || dia7 > 31) || (mes7 <= 0 || mes7 > 12) || (ano7 < 0));

        printf("Oitavo Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia8);
            printf("\nMês: ");
            scanf("%i", &mes8);
            printf("\nAno: ");
            scanf("%i", &ano8);
            if((dia8 <= 0 || dia8 > 31) || (mes8 <= 0 || mes8 > 12) || (ano8 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia8 <= 0 || dia8 > 31) || (mes8 <= 0 || mes8 > 12) || (ano8 < 0));

        printf("Nono Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia9);
            printf("\nMês: ");
            scanf("%i", &mes9);
            printf("\nAno: ");
            scanf("%i", &ano9);
            if((dia9 <= 0 || dia9 > 31) || (mes9 <= 0 || mes9 > 12) || (ano9 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia9 <= 0 || dia9 > 31) || (mes9 <= 0 || mes9 > 12) || (ano9 < 0));

        printf("Décimo Grupo: \n");
        do{
            printf("\nDia: ");
            scanf("%i", &dia10);
            printf("\nMês: ");
            scanf("%i", &mes10);
            printf("\nAno: ");
            scanf("%i", &ano10);
            if((dia10 <= 0 || dia10 > 31) || (mes10 <= 0 || mes10 > 12) || (ano10 < 0)){
                printf("Data inválida. Tente uma data válida.");
            }
        }while((dia10 <= 0 || dia10 > 31) || (mes10 <= 0 || mes10 > 12) || (ano10 < 0));

        //validação dos grupo de 10 datas
        printf("\nO grupo de datas informados são válidos.\n");

        //verificação se o usuário quer continuar
        printf("\nQuer continuar?");
        printf("\nInsira [s] para sim e [n] para não.\n");
        scanf("%s",&escolha);

        if(escolha == 'n' || escolha == 'N'){
            printf("\nEncerrando o processo.\n");
        }else if(escolha == 's' || escolha == 'S'){
            printf("\nContinuando o processo.\n");
        }
    } while (escolha == 's' || escolha == 'S');
    return 1;
}