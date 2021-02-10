programa
{
	//Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.

	funcao inicio()
	{
		inteiro numero_digitado=0

		escreva("Insira um número: ")
		leia(numero_digitado)
		limpa()

		para(inteiro i=0;i<11;i++){
			inteiro j=(numero_digitado*i)
			
			escreva("\n"+numero_digitado+" X ",i," = ",j"\n")
		}
	}
}

/* Exercícios feitos no Portugol Studio */