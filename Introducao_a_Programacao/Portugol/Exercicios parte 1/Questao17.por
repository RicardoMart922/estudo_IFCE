programa
{
	//Faça um programa que receba o raio, calcule e mostre:
	//a) o comprimento de uma esfera; sabe-se que C = 2 * p R;
	//b) a área de uma esfera; sabe-se que A = 4 pi R2;
	//c) o volume de uma esfera; sabe-se que V = 4/3 * p R3

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real raio=0.00
		real comprimento=0.00, area=0.00, volume=0.00
		const real PI=3.14

		escreva("Insira o valor do raio da esfera: ")
		leia(raio)
		limpa()

		comprimento = 2*PI*raio
		area = 4*PI*mat.potencia(raio, 2.0)
		volume = 4/3*PI*mat.potencia(raio, 3.0)

		escreva("O valor do comprimeto da esfera é: "+mat.arredondar(comprimento,2)+"u\n")
		escreva("O valor da área da esfera é: "+mat.arredondar(area,2)+"u²\n")
		escreva("O valor do volume da esfera é: "+mat.arredondar(volume,2)+"u³\n")
		
	}
}

/* Exercícios feitos no Portugol Studio */