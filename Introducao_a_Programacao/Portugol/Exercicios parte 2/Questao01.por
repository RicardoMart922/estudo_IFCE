programa
{
	/*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
	 *mensagem de aprovado ou reprovado, considerando para aprovação média 7.
	*/

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real nota1=0.00, nota2=0.00, nota3=0.00, nota4=0.00
		real media_aritmetica=0.00

		escreva("Insira a 1º nota: ")
		leia(nota1)
		escreva("Insira a 2º nota: ")
		leia(nota2)
		escreva("Insira a 3º nota: ")
		leia(nota3)
		escreva("Insira a 4º nota: ")
		leia(nota4)
		limpa()

		media_aritmetica = (nota1+nota2+nota3+nota4)/4.0
		
		se(media_aritmetica < 7){
			escreva("Sua media é: "+mat.arredondar(media_aritmetica,2)+"\n")
			escreva("REPROVADO!\n")
		}senao{
			escreva("Sua media é: "+mat.arredondar(media_aritmetica,2)+"\n")
			escreva("APROVADO!\n")
		}
		
	}
}

/* Exercícios feitos no Portugol Studio */