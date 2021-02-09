programa
{
	//Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
	//segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
	//com validações.

	inclua biblioteca Matematica --> mat

	funcao inicio()
	{
		real numero1=0.00, numero2=0.00
		real resultado_divisao=0.00

		escreva("Insira o primeiro número: ")
		leia(numero1)
		escreva("Insira o segundo número (diferente de 0): ")
		leia(numero2)
		limpa()

		resultado_divisao = (numero1/numero2)

		escreva("O resultado da divisão do primeiro número digitado pelo segundo número digitado é: "+mat.arredondar(resultado_divisao,2)+"\n")
	}
}

/* Exercícios feitos no Portugol Studio */