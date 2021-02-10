programa
{
	/*
	 * Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
	 *encontra-se na tabela a seguir.
	 */

	inclua biblioteca Matematica --> mat
	 
	funcao inicio()
	{
		real salario=0.00
		real reajuste_salario=0.00
		const real PORCENTO1=0.30
		const real PORCENTO2=0.15 

		escreva("Insira o seu salário: ")
		leia(salario)
		limpa()

		se(salario<=300.00)
		{
			reajuste_salario = salario*(1+PORCENTO1)
			escreva("O seu salário atual é: "+mat.arredondar(reajuste_salario,2)+"\n")
		}
		senao
		{
			reajuste_salario = salario*(1+PORCENTO2)
			escreva("O seu salário atual é: "+mat.arredondar(reajuste_salario,2)+"\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */