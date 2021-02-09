programa
{
	//Faça um programa que calcule e mostre a área de um trapézio.
	//Sabe-se que: A = ((base maior + base menor) * altura)/2

	funcao inicio()
	{
		real base_maior=0.00, base_menor=0.00, altura=0.00
		real area=0.00

		escreva("Insira o tamanho da base maior: ")
		leia(base_maior)
		escreva("Insira o tamanho da base menor: ")
		leia(base_menor)
		escreva("Insira a altura do trapézio: ")
		leia(altura)
		limpa()

		area = ((base_maior+base_menor)*altura)/2.00
		
		escreva("A área da trapézio é: "+area+"\n")
	}
}

/* Exercícios feitos no Portugol Studio */