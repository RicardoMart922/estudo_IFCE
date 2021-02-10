programa
{
	
	funcao inicio()
	{
		cadeia nomes[3]={"Aluno(a)-1","Aluno(a)-2","Aluno(a)-3"}
		real notas[3][4]={{9.0 , 9.5 , 9.5, 10.0 },
					   {9.0 , 9.5 , 9.5, 9.5  },
					   {10.0, 10.0, 9.0, 9.5  }}
		real medias[3]
		media(notas,medias)
		para(inteiro l=0; l<3; l++){
			real soma=0.0
			para(inteiro c=0; c<4; c++){
				soma += notas[l][c]
				
			}
			medias[l]=soma/4.0
			
		}
		inteiro aluno=0
		escreva("Digite o número do aluno: ")
		leia(aluno)
		limpa()
		cadeia aprovadx

		se(aprovado(medias[aluno])){
			aprovadx=("APROVADO!")
		}senao{
			aprovadx=("REPROVADO!")
		}
		escreveLinha(verdadeiro)
		escreva("  Aluno: "+nomes[aluno],"\n")
		escreveLinha(falso)
		escreva("     1B : "+notas[aluno][0],"\n")
		escreva("     2B : "+notas[aluno][1],"\n")
		escreva("     3B : "+notas[aluno][2],"\n")
		escreva("     4B : "+notas[aluno][3],"\n")
		escreveLinha(falso)
		escreva("  Média : "+medias[aluno],"\n")
		escreva("    "+aprovadx,"\n")
		escreveLinha(verdadeiro)
		
	}
	
	funcao logico aprovado(real nota){
		se(nota>=6){
			retorne verdadeiro
		}senao{
			retorne falso
		}
	}

	funcao media(real notas[][], real &medias[]){
		para(inteiro l=0; l<3; l++){
			real soma=0.0
			para(inteiro c=0; c<4; c++){
				soma += notas[l][c]
				
			}
			medias[l]=soma/4.0
		}
	}

	funcao escreveLinha(logico forte){
		se(forte){
			escreva("===============","\n")
		}senao{
			escreva("---------------","\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */