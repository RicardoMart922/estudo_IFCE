programa
{
	/*
	 *O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
 	 *e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
 	 *seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.
	*/

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real custo_fabrica=0.00
		real preco_consumidor=0.00

		//porcentagem do distribuidor
		const real PORCENTO1=0.05
		const real PORCENTO2=0.10
		const real PORCENTO3=0.15

		//imposto
		const real IMPOSTO1=0.00
		const real IMPOSTO2=0.15
		const real IMPOSTO3=0.20

		escreva("Insira o valor do custo de fábrica do veículo: ")
		leia(custo_fabrica)
		limpa()

		se(custo_fabrica <= 12000.00)
		{
			preco_consumidor = (custo_fabrica*((1+PORCENTO1)+IMPOSTO1))
			escreva("O preço do veículo é:R$ "+mat.arredondar(preco_consumidor,2)+"\n")
		}
		senao se(custo_fabrica > 12000.00 e custo_fabrica <= 25000.00)
		{
			preco_consumidor = (custo_fabrica*((1+PORCENTO1)+IMPOSTO2))
			escreva("O preço do veículo é:R$ "+mat.arredondar(preco_consumidor,2)+"\n")
		}
		senao se(custo_fabrica > 25000.00)
		{		
			preco_consumidor = (custo_fabrica*((1+PORCENTO1)+IMPOSTO3))
			escreva("O preço do veículo é:R$ "+mat.arredondar(preco_consumidor,2)+"\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */