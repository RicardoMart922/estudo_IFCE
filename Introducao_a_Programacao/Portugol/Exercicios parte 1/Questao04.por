programa
{
	//Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
	//peso 2 para a primeira e peso 3 para a segunda.

	inclua biblioteca Matematica --> mat

	funcao inicio()
	{
		real nota1=0.00, nota2=0.00
		real media_ponderada=0.00
		const inteiro PESO_NOTA1=2, PESO_NOTA2=3	

		escreva("Insira a primeira nota: ")
		leia(nota1)
		escreva("Insira a segunda nota: ")
		leia(nota2)
		limpa()

		media_ponderada = ((PESO_NOTA1*nota1)+(PESO_NOTA2*nota2))/(PESO_NOTA1+PESO_NOTA2)

		escreva("A média ponderada é: "+mat.arredondar(media_ponderada,2)+"\n")
	}
}


/* Exercícios feitos no Portugol Studio */