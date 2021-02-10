programa
{
	//João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
	//multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de João.

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real salario=0.00, valor_conta1=0.00, valor_conta2=0.00, total_multa=0.00
		real resto_salario=0.00
		const real TAXA_MULTA=0.02

		escreva("Insira o valor da primeira conta:R$ ")
		leia(valor_conta1)
		escreva("Insira o valor da segunda conta:R$ ")
		leia(valor_conta2)
		escreva("Insira o valor do seu salário:R$ ")
		leia(salario)
		limpa()

		total_multa = (valor_conta1*(1+TAXA_MULTA)+(valor_conta2*(1+TAXA_MULTA)))
		resto_salario = (salario-total_multa)

		escreva("O que restará do seu salário quando pagar as duas contas é igual a:R$ "+mat.arredondar(resto_salario,2)+"\n")
		
	}
}

/* Exercícios feitos no Portugol Studio */