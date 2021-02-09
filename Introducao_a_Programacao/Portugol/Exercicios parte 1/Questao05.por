programa
{
	//Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
	//que este sofreu um desconto de 10%.

	inclua biblioteca Matematica --> mat

	funcao inicio()
	{
		real preco=0.00
		real novo_preco=0.00
		const real DESCONTO=0.1

		escreva("Insira o preço do produto:R$ ")
		leia(preco)
		limpa()

		novo_preco=preco*(1-DESCONTO)

		escreva("O novo preço do produto é: "+mat.arredondar(novo_preco,2)+"\n")
	}
}


/* Exercícios feitos no Portugol Studio */