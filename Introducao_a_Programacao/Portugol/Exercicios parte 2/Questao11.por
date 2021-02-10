programa
{
	/*
	 *Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
 	 *mostre o valor do aumento e o novo salário.
	 */

	inclua biblioteca Matematica --> mat
	 
	funcao inicio()
	{
		real salario_atual=0.00
		real novo_salario=0.00, valor_aumento=0.00

		//PERCENTUAL DE AUMENTO
		const real PERCENTUAL1=0.15
		const real PERCENTUAL2=0.10
		const real PERCENTUAL3=0.05
		const real PERCENTUAL4=0.00

		escreva("Insira o valor do seu salário: ")
		leia(salario_atual)
		limpa()

		se(salario_atual <= 300.00)
		{
			valor_aumento = salario_atual*PERCENTUAL1
			novo_salario = salario_atual + valor_aumento

			escreva("O seu salário foi acrescido de R$"+mat.arredondar(valor_aumento,2)+"\n")
			escreva("O seu novo salário é:R$ "+mat.arredondar(novo_salario,2)+"\n")
		}
		senao se(salario_atual > 300.00 e salario_atual < 600.00)
		{
			valor_aumento = salario_atual*PERCENTUAL2
			novo_salario = salario_atual + valor_aumento

			escreva("O seu salário foi acrescido de R$"+mat.arredondar(valor_aumento,2)+"\n")
			escreva("O seu novo salário é:R$ "+mat.arredondar(novo_salario,2)+"\n")
		}
		senao se(salario_atual >= 600.00 e salario_atual <= 900.00 )
		{
			valor_aumento = salario_atual*PERCENTUAL3
			novo_salario = salario_atual + valor_aumento

			escreva("O seu salário foi acrescido de R$"+mat.arredondar(valor_aumento,2)+"\n")
			escreva("O seu novo salário é:R$ "+mat.arredondar(novo_salario,2)+"\n")
		}
		senao se(salario_atual > 900.00)
		{
			valor_aumento = salario_atual*PERCENTUAL4
			novo_salario = salario_atual + valor_aumento

			escreva("O seu salário foi acrescido de R$"+mat.arredondar(valor_aumento,2)+"\n")
			escreva("O seu novo salário é:R$ "+mat.arredondar(novo_salario,2)+"\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */