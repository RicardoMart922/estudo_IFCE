programa
{
	//Faça um programa que receba o peso de uma pessoa, calcule e mostre:
	//a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
	//b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.

	inclua biblioteca Matematica --> mat

	funcao inicio()
	{
		real peso=0.00
		real novo_peso_aumento=0.00, novo_peso_reducao=0.00
		real taxa_aumento=0.15, taxa_reducao=0.2

		escreva("Insira o seu peso: ")
		leia(peso)
		limpa()

		novo_peso_aumento = peso+(peso*taxa_aumento)
		novo_peso_reducao = peso-(peso*taxa_reducao)

		escreva("O seu peso com um aumento de 15% é: "+mat.arredondar(novo_peso_aumento,2)+"\n")
		escreva("O seu peso com uma redução de 20% é: "+mat.arredondar(novo_peso_reducao,2)+"\n")
		
	}
}

/* Exercícios feitos no Portugol Studio */