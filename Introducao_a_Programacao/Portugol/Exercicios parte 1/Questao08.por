programa
{
	//Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

	inclua biblioteca Matematica --> mat

	funcao inicio()
	{
		real peso_quilos=0.00
		real peso_gramas=0.00
		const inteiro GRAMAS=1000

		escreva("Insira seu peso, em Kg: ")
		leia(peso_quilos)
		limpa()

		peso_gramas = peso_quilos*GRAMAS

		escreva("Seu peso em gramas é de: "+mat.arredondar(peso_gramas,2)+"\n")
		
	}
}

/* Exercícios feitos no Portugol Studio */