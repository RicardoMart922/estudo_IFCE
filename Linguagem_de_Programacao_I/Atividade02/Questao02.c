/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 2. Receba o número de horas trabalhadas por uma pessoa e o valor do salário mínimo e mostre o salário a 
*    receber baseado nas seguintes regras:
*    a) A hora trabalhada equivale a 10% do salário mínimo informado;
*    b) O salário bruto é dado pelo número de horas trabalhadas multiplicadas pelo valor de cada hora;
*    c) O imposto pago é de 3%;
*    d) O salário a receber é equivalente ao salário bruto subtraído do imposto.
*/
#include <stdio.h>
#include <windows.h>

#define IMPOSTO 0.03

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int numero_horas_trabalhadas = 0;
    float salario_bruto = 0.0, salario_receber = 0.0, valor_hora_trabalhada = 0.0;
    float salario_minimo = 0.0;

    printf("Insira o número de horas trabalhadas: ");
    scanf("%i", &numero_horas_trabalhadas);
    printf("Insira o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    valor_hora_trabalhada = (salario_minimo*0.1);
    
    salario_bruto = (numero_horas_trabalhadas*valor_hora_trabalhada);
   
    salario_receber = (salario_bruto-(salario_bruto*IMPOSTO));

    printf("O seu salário é R$ %.2f\n", salario_receber);
    
    return 0;
}