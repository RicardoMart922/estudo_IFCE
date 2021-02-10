programa
{
	/*Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
	 *de diagonais desse polígono. Sabe-se que D = N * (N − 3)/2, em que N é o número de lados do polígono
	 */
	
	funcao inicio()
	{
		inteiro lados=0
		inteiro diagonais=0

		escreva("Digite o número de lados do polígono: ")
		leia(lados)
		limpa()
		
		se(lados<=2){
			escreva("Não há polígonos com menos de três lados.")
		}senao{
			diagonais = lados*(lados-3)/2
			escreva("O número de diagonais do polígono é: "+diagonais+"\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */