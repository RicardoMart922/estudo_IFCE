programa
{
	inclua biblioteca Arquivos --> arq
	
	funcao inicio()
	{
		const cadeia CAMINHO = "./frase.txt"	
		inteiro opcao
		cadeia frase

		escreva("Digite 1 para ver a frase ou 2 para altera-lá. ")
		leia(opcao)
		limpa()

		se(opcao==2){
			//alterar
			escreva("Escreva uma nova frase: ")
			leia(frase)
			inteiro arquivo = arq.abrir_arquivo(CAMINHO,arq.MODO_ESCRITA)
			arq.escrever_linha(frase, arquivo)
			arq.fechar_arquivo(arquivo)
		}senao{
			//exibir
			logico arquivo_existe = arq.arquivo_existe(CAMINHO)
			se(arquivo_existe){
			inteiro arquivo = arq.abrir_arquivo(CAMINHO,arq.MODO_LEITURA)
			frase = arq.ler_linha(arquivo)
			arq.fechar_arquivo(arquivo)
			escreva("A frase é:\n\n ** ",frase," **")
			}senao{
				escreva("Nada é verdade, tudo é permitido!")
			}
		}
	}
}

/* Exercícios feitos no Portugol Studio */