programa
{
	inclua biblioteca Texto --> t
	funcao inicio()
	{
		cadeia entrada
		inteiro qtd_letras, M=0, F=0, N=0
		caracter letras
		

		escreva("Digite a entrada: ")
		leia(entrada)
		limpa()
		
		entrada = t.caixa_alta(entrada)
		qtd_letras = t.numero_caracteres(entrada)
		
		para(inteiro i=0; i<qtd_letras; i++){
			letras = t.obter_caracter(entrada, i)
			se(letras=='F'){
				F++
			}senao se(letras=='M'){
				M++
			}senao{
				N++
			}
		}
		escreva("São "+M+" pessoas do gênero masculino, "+F+" pessoas do gênero feminino e "+N+" pessoas que não se identificam com nenhum dos dois gêneros. \n")
	}
}

/* Exercícios feitos no Portugol Studio */