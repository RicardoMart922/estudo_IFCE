programa
{
	/*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
	 *de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
	 *a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
	*/

	inclua biblioteca Matematica --> mat

	funcao inicio()
	{
		real dimensao1=0.00, dimensao2=0.00
		real area=0.00, potencia=0.00
		const real WATTS=18.0

		escreva("Digite a 1º dimensão do cômodo: ")
		leia(dimensao1)
		escreva("Digite a 2º dimensão do cômodo: ")
		leia(dimensao2)
		limpa()

		area = dimensao1*dimensao2
		potencia = area*WATTS

		escreva("A área do cômodo é "+mat.arredondar(area, 2)+"m² e a potência que deverá ser utilizada é de "+mat.arredondar(potencia,2)+"W \n")
	}
}

/* Exercícios feitos no Portugol Studio */