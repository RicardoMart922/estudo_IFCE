programa
{
	/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário.
	 *Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
	 *Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
	 */

	 inclua biblioteca Matematica --> mat
	 
	funcao inicio()
	{
		real numero1=0.00, numero2=0.00
		inteiro opcao=0
		real media=0.00, diferenca=0.00, produto=0.00, divisao=0.00

		escreva("Digite o 1º número: ")
		leia(numero1)
		escreva("Digite o 2º número: ")
		leia(numero2)
		limpa()
		
		escreva("Escolha:\n(1)Média\t(2)Diferença\n(3)Produto\t(4)Divisão\n")
		leia(opcao)
		limpa()
		
		escolha(opcao)
		{
			caso 1:
				media = (numero1+numero2)/2
				escreva("A média dos número é: "+mat.arredondar(media,2)+"\n")
			pare
			caso 2:
				se(numero1 > numero2)
				{
					diferenca = (numero1-numero2)
					escreva("A diferença do maior número pelo menor é: "+diferenca+"\n")
				}
				senao se(numero2 > numero1)
				{
					diferenca = (numero2-numero1)
					escreva("A diferença do maior número pelo menor é: "+diferenca+"\n")
				}
			pare
			caso 3:
				produto = (numero1*numero2)
				escreva("O produto dos números digitados é: "+produto+"\n")
			pare
			caso 4:
				se(numero2==0)
				{
					enquanto(numero2==0)
					{
						escreva("Divisão por zero(0) gera uma inderteminação matemática.\n")
						escreva("Digite o 2º número: ")
						leia(numero2)
						limpa()
					
						divisao = numero1/numero2
						escreva("A divisão do primeiro pelo segundo é: "+mat.arredondar(divisao,2)+"\n")
					}
				}
				senao
				{
					divisao = numero1/numero2
					escreva("A divisão do primeiro pelo segundo é: "+mat.arredondar(divisao,2)+"\n")
				}
			pare
			caso contrario: 
				escreva("Opção inválida.")
		}
	}
}

/* Exercícios feitos no Portugol Studio */