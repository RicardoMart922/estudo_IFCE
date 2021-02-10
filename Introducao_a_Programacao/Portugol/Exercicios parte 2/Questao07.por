programa
{
	/*
	 *Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
	 *programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
	 *ele não tenha direito ao aumento.
	 */

	 inclua biblioteca Matematica --> mat
	 
	funcao inicio()
	{
		real salario=0.00
		const real AJUSTE=0.30
		real novo_salario=0.00

		escreva("Insira o seu salário:R$ ")
		leia(salario)	
		limpa()

		se(salario <= 500.00)
		{
			novo_salario=salario*(1+AJUSTE)
			escreva("O seu novo salário é:R$ "+mat.arredondar(novo_salario,2)+"\n")
		}
		senao
		{
			escreva("Você não tem direiro ao aumento, porque seu salário é superior a R$500,00.\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */