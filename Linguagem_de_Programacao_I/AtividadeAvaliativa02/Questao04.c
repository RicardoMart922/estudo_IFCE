/* 
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Linguagem de Programação I
* Professor: Rhyan Ximenes de Brito
* Aluno: Ricardo Martins Cordeiro
*
* 4. Faça um agoritmo que calcule para uma turma de 45 alunos o seguinte:
*    a) a idade média dos alunos com menos de 1.70m de altura.
*    b) a altura média dos alunos com mais de 20 anos.
*    Obs1. Utilizar o laço de repetição for.
*    Obs2. Validar os dados.
*/

#include <stdio.h>
#include <windows.h>

#define ALUNOS 45
#define IDADE 20
#define ALTURA 1.70

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int i = 0, idade = 0, quantidadeAlunosIdade = 0;
    float altura = 0.0, quantidadeAlunosAltura = 0.0;
    float idadeMedia = 0.0, alturaMedia = 0.0;

    for (i = 0; i < ALUNOS; i++) {
        printf("Informe a idade do aluno(a): ");
        scanf("%d", &idade);
        printf("Informe a altura do aluno(a): ");
        scanf("%f", &altura);
        if (idade > IDADE) {
            alturaMedia += altura;
            quantidadeAlunosAltura++;
        }
        if (altura < ALTURA) {
            idadeMedia += idade;
            quantidadeAlunosIdade++;
        }
    }

    printf ("A altura média dos alunos que possuem mais de 20 anos: %.2f\n", (alturaMedia/quantidadeAlunosAltura));
    printf ("A idade média dos alunos que possuem menos de 1,70m de altura: %.2f\n", (idadeMedia/quantidadeAlunosIdade));

    return 1;
}