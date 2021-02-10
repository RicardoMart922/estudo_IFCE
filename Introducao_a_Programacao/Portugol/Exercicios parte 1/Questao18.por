programa
{
	//Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
	//Fahrenheit. Sabe-se que F = 180*(C + 32)/100.

	inclua biblioteca Matematica -->
	
	funcao inicio()
	{
		real celsius=0.00
		real fahrenheit=0.00

		escreva("Insira a temperatura em Celsius: ")
		leia(celsius)
		limpa()

		fahrenheit = 1.8*(celsius+32)

		escreva("A temperatura informada é em Fahrenheit = "+mat.arredondar(fahrenheit,2)+"\n")
	}
}

/* Exercícios feitos no Portugol Studio */