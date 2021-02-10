programa
{
	//Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
	//e mostre a quantidade de salários mínimos que esse funcionário ganha.
	
	funcao inicio()
	{
		real salario_minimo=0.00, salario_funcionario=0.00
		real quantidade_salarios=0.00

		escreva("Insira o valor do salário mínimo:R$ ")
		leia(salario_minimo)
		escreva("Insira o valor do salário do funcionário:R$ ")
		leia(salrio_funcionario)
		limpa()

		quantidade_salarios = (salario_funcionario/salario _minimo)

		escreva("O funcionário recebe "+quantidade_salarios+" salário(s) mínimo(s).\n")
	}
}

/* Exercícios feitos no Portugol Studio */