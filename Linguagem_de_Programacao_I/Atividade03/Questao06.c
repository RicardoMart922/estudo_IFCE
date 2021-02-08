/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 6. João abriu uma lanchonete e você foi requisitado para desenvolver um software para ele. 
*    Sabemos que a principio João somente oferecerá alguns tipos de produtos. Esse produtos estando
*    em promoção de estreia são:
*    misto quente + suco de uva = 2.15;
*    hambúrguer + coca-cola = 4.50;
*    caldo de cana + pastel = 2.40;
*    coxinha + guaraná = 2.30;
*    fatia bolo + suco acerola = 1.80;
*    pudim = 2.0.
*    Com base nessas informações elabore um programinha onde o cliente escolherá sua opção através
*    de um sistema de códigos, para que com base nesses códigos o balconista saiba o valor que deva
*    ser cobrado do cliente. Obs. Utilizar a estrutura de múltipla escolha.
*/

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int escolha = 0;

    printf("\n------------------------------------------------\n");
    printf("|     [1] Misto com suco de uva                |\n");
    printf("|     [2] Hambúrguer com Coca-cola             |\n");
    printf("|     [3] Caldo de cana com pastel             |\n");
    printf("|     [4] Coxinha com Guaraná                  |\n");
    printf("|     [5]Fatia de bolo com suco de Acerola     |\n");
    printf("|     [6] Pudim                                |");
    printf("\n------------------------------------------------\n");
    printf("\nFaça sua escolha: ");
    do{
        scanf("%i", &escolha);
        if(escolha < 0 || escolha > 6){
            printf("\nEscolha inválida. Tente uma opção válida.");
        }
    }while(escolha < 0 || escolha > 6);

    switch (escolha){
    case 1:
        printf("Sua escolha custa R$2.15\n");
        break;
    case 2:
        printf("Sua escolha custa R$4.50\n");
        break;
    case 3:
        printf("Sua escolha custa R$2.40\n");
        break;
    case 4:
        printf("Sua escolha custa R$2.30\n");
        break;
    case 5:
        printf("Sua escolha custa R$1.80\n");
        break;
    default:
        printf("Sua escolha custa R$2.0\n");
        break;
    }
    
    return 1;
}

