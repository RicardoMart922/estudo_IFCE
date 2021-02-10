programa
{
	/*
	 *Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
	 *um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
	 *seguir. Mostre o saldo médio e o valor do crédito.
	 */

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real saldo_medio=0.00
		real credito=0.00
		const real ACIMA_400=0.30
		const real ENTRE_400_E_300=0.25
		const real ENTRE_300_E_200=0.20
		const real ATE_200=0.10

		escreva("Insira o seu saldo médio: ")
		leia(saldo_medio)
		limpa()

		se(saldo_medio > 400.00)
		{
			credito = saldo_medio*ACIMA_400
			escreva("Seu saldo médio é:R$ "+mat.arredondar(saldo_medio,2)+"\n")
			escreva("Seu crédito é: "+mat.arredondar(credito,2)+"\n")
		}
		senao se(saldo_medio > 300.00 e saldo_medio <= 400.00)
		{
			credito = saldo_medio*ENTRE_400_E_300
			escreva("Seu saldo médio é:R$ "+mat.arredondar(saldo_medio,2)+"\n")
			escreva("Seu crédito é: "+mat.arredondar(credito,2)+"\n")
		}
		senao se(saldo_medio > 200.00 e saldo_medio <= 300.00)
		{
			credito = saldo_medio*ENTRE_300_E_200
			escreva("Seu saldo médio é:R$ "+mat.arredondar(saldo_medio,2)+"\n")
			escreva("Seu crédito é: "+mat.arredondar(credito,2)+"\n")
		}
		senao se(saldo_medio <= 200)
		{
			credito = saldo_medio*ATE_200
			escreva("Seu saldo médio é:R$ "+mat.arredondar(saldo_medio,2)+"\n")
			escreva("Seu crédito é: "+mat.arredondar(credito,2)+"\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */