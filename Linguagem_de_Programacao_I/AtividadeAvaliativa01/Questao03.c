/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 3. Receba o número de horas trabalhadas por uma pessoa e o valor do salário mínimo e mostre o salário a
*    receber baseado nas seguintes regras:
*    a) A hora trabalhada equivale a 12,76% do salário mínimo informado.
*    b) O salário bruto é dado pelo número de horas trabalhadas multiplicado pelo valor de cada hora.
*    c) O imposto pago é de 4,70%.
*    d) O salário a receber é equivalente ao salário bruto subtraído do imposto.
*/

#include <stdio.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int horasTrabalhadas = 0;
    float salarioMinimo = 0.0, salarioBruto = 0.0, salario = 0.0, imposto = 0.0;
    float salarioReceber = 0.0;

    printf("Informe a quantidade de horas trabalhadas: \n");
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    printf("Informe o valor do sálario mínimo: \n");
    printf("Sálario mínimo: R$ ");
    scanf("%f", &salarioMinimo);
    
    salario = horasTrabalhadas * 0.1276 * salarioMinimo;
    salarioBruto = horasTrabalhadas * salario;
    imposto = salario * 0.0470;
    salarioReceber = salarioBruto - imposto;

    printf("O sálario a receber é de R$ %.2f.\n", salarioReceber);
    
    return 1;
}