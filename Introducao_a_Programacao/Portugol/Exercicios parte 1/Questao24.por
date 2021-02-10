programa
{
	/*Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Ela
	 *vai passar por vários países e precisa converter seu dinheiro em dólares, marco alemão e libra esterlina. Sabe-
	 *-se que a cotação do dólar é de R$ 1,80; do marco alemão, de R$ 2,00; e da libra esterlina, de R$ 3,57. O
	 *programa deve fazer as conversões e mostrá-las.
	 */

	inclua biblioteca Matematica --> mat
	
	funcao inicio()
	{
		real reais=0.00
		const real COTACAO_DOLAR=1.80
		const real COTACAO_MARCO=2.00
		const real COTACAO_LIBRA=3.57
		real dolares=0.00, marco_alemao=0.00, libra_esterlina=0.00

		escreva("Digite a quantia de dinheiro em reais:R$ ")
		leia(reais)

		dolares = reais/COTACAO_DOLAR
		marco_alemao = reais/COTACAO_MARCO
		libra_esterlina = reais/COTACAO_LIBRA

		escreva("A conversão de reais para dólares é: "+mat.arredondar(dolares,2)+"\n")
		escreva("A conversão de reais para marco alemão é: "+mat.arredondar(marco_alemao,2)+"\n")
		escreva("A conversão de reais para libras esterlinas é: "+mat.arredondar(libra_esterlina,2)+"\n")
		
	}
}

/* Exercícios feitos no Portugol Studio */