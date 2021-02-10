programa
{
	/*
	 *Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância
	 *em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar
	 *sua ponta.
	*/

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real angulo=0.00, lado_adjacente=0.00, cos_ang=0.00
		real medida_escada=0.00
		const real PI=3.141592653589793

		escreva("Digite o valor, em graus, do ângulo pela escada apoiada no chão: ")
		leia(angulo)
		escreva("Digite a distância em que a escada estar da parede: ")
		leia(lado_adjacente)
		limpa()

		angulo = angulo*PI/180
		medida_escada = lado_adjacente/angulo

		escreva("A medida da escada é "+mat.arredondar(medida_escada,2)+"m \n")
	}
}

/* Exercícios feitos no Portugol Studio */