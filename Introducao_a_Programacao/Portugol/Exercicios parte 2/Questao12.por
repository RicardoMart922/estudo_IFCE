programa
{
	/*
	 *Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
	 *mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado
	 *o imposto de 7% sobre o salário. 
	 */

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real salario_bruto=0.00
		real valor_receber=0.00

		//Gratificações
		const real GRATIFICACAO1=100.00
		const real GRATIFICACAO2=75.00
		const real GRATIFICACAO3=50.00
		const real GRATIFICACAO4=35.00

		//Imposto
		const real IMPOSTO=0.07

		escreva("Insira o seu salário bruto: ")
		leia(salario_bruto)
		limpa()

		se(salario_bruto <= 300.00)
		{
			valor_receber = salario_bruto*(1-IMPOSTO) + GRATIFICACAO1

			escreva("O valor que você receberá é:R$ "+mat.arredondar(valor_receber,2)+"\n")
		}
		senao se(salario_bruto > 300.00 e salario_bruto < 600.00)
		{
			valor_receber = salario_bruto*(1-IMPOSTO) + GRATIFICACAO2
			

			escreva("O valor que você receberá é:R$ "+mat.arredondar(valor_receber,2)+"\n")
		}
		senao se(salario_bruto >= 600.00 e salario_bruto <= 900.00)
		{
			valor_receber = salario_bruto*(1-IMPOSTO) + GRATIFICACAO3

			escreva("O valor que você receberá é:R$ "+mat.arredondar(valor_receber,2)+"\n")
		}
		senao 
		{
			valor_receber = salario_bruto*(1-IMPOSTO) + GRATIFICACAO4

			escreva("O valor que você receberá é:R$ "+mat.arredondar(valor_receber,2)+"\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */