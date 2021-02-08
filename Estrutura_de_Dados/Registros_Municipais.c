/*
* IFCE - Instituto Federal do Ceará - Campus Tianguá
* Curso: Bacharelado em Ciência da Computação
* Ano: 2º semestre - 2020.2
* Disciplina: Estrutura de Dados
* Professor: Nécio de Lima Veras
* Aluno: Ricardo Martins Cordeiro
*
* Desenvolva um programa que cadastre registros municipais. Cada registro deve possuir o nome do município, o 
* estado e a população.
*
* A primeira leitura será o número de registros que será lido em seguida. Depois o programa irá ler cada registro seguindo
* a ordem de leitura: nome, estado (apenas a sigla com 2 caracteres) e o tamanho da população.
*
* Ao final, o programa deve exibir todos os municípios cadastrados do estado do CE e, além disso, os dados do município 
* que contenha a maior população (independente de qual estado ele pertença).
*
* Observações:
*
* 1. Crie um novo tipo de dado para o registro
* 2. Manipule o registro por meio de um ponteiro
* 3. Escreva o programa de forma modularizada
* 4. Atente para a saída esperada
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*FUNCOES AUXILIARES PARA LEITURA DOS DADOS*/
int CaracterValido(char letra) {
    if ((letra >= 'a') && (letra <= 'z'))
        return 1;
    if ((letra >= 'A') && (letra <= 'Z'))
        return 1;
    if (letra == ' ')
        return 1;
    return 0;
}

char* lerString(int qtd_caracteres) {
    qtd_caracteres++;
    int i = 0;
    char* string = (char*) malloc(sizeof(char) * qtd_caracteres);
    char letra = 'a';

    while (1) {
        letra = getchar();
        if (((letra == '\n') && (i > 0)) || (i == (qtd_caracteres-1))) {
            break;
        } else if (CaracterValido(letra)) {
            string[i] = letra;
            i++;
        }
    }

    string[i] = '\0';

    return string;
}
/*=========================================*/

#define TAM_NOME 40
#define TAM_ESTADO 2

typedef struct {
    char* nome;
    char* estado;
    int populacao;
} RegistroMunicipal;

RegistroMunicipal* criarVetorMunicipio(int quantidade);
void lerDadosMunicipio(RegistroMunicipal* vet);
void imprimirMunicipiosCE(RegistroMunicipal* vet, int quantidade);
void imprimirMunicipioMaiorPopulacao(RegistroMunicipal* vet, int quantidade);
void destruirVetorMunicipios(RegistroMunicipal* vet);

int main() {
    RegistroMunicipal* vetorMunicipio = NULL;
    int numeroMunicipios = 0, i = 0;

    scanf("%i", &numeroMunicipios);

    vetorMunicipio = criarVetorMunicipio(numeroMunicipios);

    if(vetorMunicipio != NULL){
        for(i = 0; i < numeroMunicipios; i++){
            lerDadosMunicipio(&vetorMunicipio[i]);
        }
        imprimirMunicipiosCE(vetorMunicipio, numeroMunicipios);
        imprimirMunicipioMaiorPopulacao(vetorMunicipio, numeroMunicipios);
        destruirVetorMunicipios(vetorMunicipio);
    } else {
        exit(1);
    }
    return 1;
}

RegistroMunicipal* criarVetorMunicipio(int quantidade) {
    RegistroMunicipal* vet = (RegistroMunicipal*) malloc (quantidade * sizeof(RegistroMunicipal));
	if(vet != NULL) {
		return vet;
	} else {
		printf("Memoria insuficiente.\n");
        exit(1);
	}
}

void lerDadosMunicipio(RegistroMunicipal* vet) {
    vet->nome = lerString(TAM_NOME);
    vet->estado = lerString(TAM_ESTADO);
    scanf("%i", &vet->populacao);
}

void imprimirMunicipiosCE(RegistroMunicipal* vet, int quantidade) {
    int i = 0;
    if(vet != NULL) {
        for(i = 0; i < quantidade; i++){
            if(strcmp(vet[i].estado, "CE") == 0) {
                printf("%s-%s\n", vet[i].nome, vet[i].estado);
            }
        }
    } else {
        exit(1);
    }
}

void imprimirMunicipioMaiorPopulacao(RegistroMunicipal* vet, int quantidade) {
    int i = 1;
    RegistroMunicipal MaiorPopulacao = vet[0];
    for (i = 1; i < quantidade; i++) {
        if (vet[i].populacao > MaiorPopulacao.populacao) {
            MaiorPopulacao = vet[i];
        }
    }
    printf("%s-%s = %i", MaiorPopulacao.nome, MaiorPopulacao.estado, MaiorPopulacao.populacao);
}

void destruirVetorMunicipios(RegistroMunicipal* vet) {
    free(vet);
}
