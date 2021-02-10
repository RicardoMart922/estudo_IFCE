programa
{
	//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
	//a) a idade dessa pessoa em anos;
	//b) a idade dessa pessoa em meses;
	//c) a idade dessa pessoa em dias;
	//d) a idade dessa pessoa em semanas.
	
	funcao inicio()
	{
		inteiro ano_nascimento=0, ano_atual=0
		inteiro idade_anos=0, idade_meses=0, idade_dias=0
		real idade_semanas=0.00

		escreva("Insira o ano atual: ")
		leia(ano_atual)
		escreva("Insira o ano do seu nascimento: ")
		leia(ano_nascimento)
		limpa()

		inteiro idade = (ano_atual-ano_nascimento)
		
		idade_anos = idade
		idade_meses = idade*12
		idade_dias = idade*365
		idade_semanas = idade*52.14

		escreva("Sua idade em anos é: "+idade_anos+"\n")
		escreva("Sua idade em meses é: "+idade_meses+"\n")
		escreva("Sua idade em dias é: "+idade_dias+"\n")
		escreva("Sua idade em semanas é: "+idade_semanas+"\n")
		
	}
}

/* Exercícios feitos no Portugol Studio */