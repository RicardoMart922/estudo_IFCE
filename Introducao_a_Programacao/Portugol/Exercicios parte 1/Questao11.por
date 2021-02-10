programa
{
	//Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2.
	
	funcao inicio()
	{
		real diagonal_maior=0.00, diagonal_menor=0.00
		real area=0.00

		escreva("Insira o valor da diagonal maior: ")
		leia(diagonal_maior)
		escreva("Insira o valor da diagonal menor: ")
		leia(diagonal_menor)
		limpa()

		area = (diagonal_maior*diagonal_menor)/2.00

		escreva("A área do losango é: "+area+"\n")
	}
}

/* Exercícios feitos no Portugol Studio */