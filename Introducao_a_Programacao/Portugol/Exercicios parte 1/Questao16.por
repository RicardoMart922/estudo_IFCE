programa
{
	//Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real cateto_1=0.00, cateto_2=0.00
		real hipotenusa=0.00

		escreva("Insira o valor do primeiro cateto: ")
		leia(cateto_1)
		escreva("Insira o valor do segundo cateto: ")
		leia(cateto_2)
		limpa()

		hipotenusa = mat.potencia(cateto_1,2.0)+mat.potencia(cateto_2,2.0)
		hipotenusa = mat.raiz(hipotenusa,2.0)

		escreva("O valor da hipotenusa é: "+mat.arredondar(hipotenusa,2)+"\n")
	}
}

/* Exercícios feitos no Portugol Studio */