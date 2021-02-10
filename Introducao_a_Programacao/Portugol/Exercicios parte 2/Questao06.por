programa
{
	/*
	 *Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
	 *escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
	 *programa. As opções são:
	 *a) O primeiro número elevado ao segundo número.
	 *b) Raiz quadrada de cada um dos números.
	 *c) Raiz cúbica de cada um dos números.
	 */

	 inclua biblioteca Matematica --> mat
	 inclua biblioteca Texto --> txt
	 inclua biblioteca Tipos --> tp
	 
	funcao inicio()
	{
		real numero1=0.00, numero2=0.00
		caracter opcao
		real potencia=0.00, raiz_quadrada1=0.00,raiz_quadrada2=0.00, raiz_cubica1=0.00, raiz_cubica2=0.00

		escreva("Insira o 1º número: ")
		leia(numero1)
		escreva("Insira o 2º número: ")
		leia(numero2)
		limpa()

		escreva("escolha:\n(a) O primeiro número elevado ao segundo número\n(b)  Raiz quadrada de cada um dos números\n(c) Raiz cúbica de cada um dos números\n")
		escreva("Sua escolha: ")
		leia(opcao)
		limpa()
		
		escolha(opcao){
			caso 'a':
				potencia = mat.potencia(numero1, numero2)
				escreva("A potência é: "+mat.arredondar(potencia,10)+"\n")
			pare
			caso 'b':
				raiz_quadrada1 = mat.raiz(numero1, 2.0)
				raiz_quadrada2 = mat.raiz(numero2, 2.0)
				escreva("A raiz quadrada do primeiro número é: "+mat.arredondar(raiz_quadrada1, 2)+"\n")
				escreva("A raiz quadrada do segundo número é: "+mat.arredondar(raiz_quadrada2,2)+"\n")
			pare
			caso	'c':
				raiz_cubica1 = mat.raiz(numero1, 3.0)
				raiz_cubica2 = mat.raiz(numero2, 3.0)
				escreva("A raiz cúbica do primeiro número é: "+mat.arredondar(raiz_cubica1,2)+"\n")
				escreva("A raiz cúbica do segundo número é: "+mat.arredondar(raiz_cubica2,2)+"\n")
			pare
			caso contrario:
				escreva("Opção inválida.")
		}
	}
}

/* Exercícios feitos no Portugol Studio */