programa
{
	/*Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
	 *de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
	 *a) a hora trabalhada vale 1/8 do salário mínimo;
	 *b) a hora extra vale 1/4 do salário mínimo;
	 *c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
	 *d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
	 *e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
	*/
	
	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real horaTrabalhada=0.00, horaExtra=0.00, salarioMinimo=0.00
		real valor_horaTrabalhada=0.00, valor_horaExtra=0.00
		real salariobruto=0.00, quantia_horaExtra=0.00
		real salarioreceber=0.00

		escreva("Digite o números de horas trabalhadas: ")
		leia(horaTrabalhada)
		escreva("Digite o número de horas extras trabalhadas: ")
		leia(horaExtra)
		escreva("Digite o valor do salário mínimo atual: ")
		leia(salarioMinimo)
		limpa()

		valor_horaTrabalhada = salarioMinimo/8
		valor_horaExtra = salarioMinimo/4

		salariobruto = horaTrabalhada*valor_horaTrabalhada
		quantia_horaExtra = horaExtra*valor_horaExtra

		salarioreceber = salariobruto+quantia_horaExtra

		escreva("O salário será de "+mat.arredondar(salarioreceber,2)+"\n")
	}
}

/* Exercícios feitos no Portugol Studio */