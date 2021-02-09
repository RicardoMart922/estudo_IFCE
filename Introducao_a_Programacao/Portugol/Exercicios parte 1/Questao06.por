programa
{
	//Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
	//que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
	//salário final.

	inclua biblioteca Matematica --> mat

	funcao inicio()
	{
		real salario_fixo=0.00, salario_final=0.00, vendas=0.00
		real comissao=0.00
		const real TAXA=0.04

		escreva("Insira o sálario do funcionário:R$ ")
		leia(salario_fixo)
		escreva("Insira o valor das vendas do funcionário:R$ ")
		leia(vendas)
		limpa()

		comissao=vendas*TAXA
		salario_final=salario_fixo+comissao

		escreva("A comissão do funcionário é de "+mat.arredondar(comissao,2)+"\n")
		escreva("O salário do funcionário é de "+mat.arredondar(salario_final,2)+"\n")
	}
}

/* Exercícios feitos no Portugol Studio */