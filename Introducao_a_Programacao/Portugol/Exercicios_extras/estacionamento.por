programa
{
	inclua biblioteca Arquivos --> arq
	inclua biblioteca Tipos --> tp
	
	inteiro vagas[20]
	const cadeia CAMINHO = "./estacionamento.txt"

	funcao abrir()
	{
		se(arq.arquivo_existe(CAMINHO)){
			inteiro arquivo = arq.abrir_arquivo(CAMINHO,arq.MODO_LEITURA)
			cadeia linha
			para(inteiro i=0; i<20; i++){
				linha = arq.ler_linha(arquivo)
				se(linha == ""){
					pare					
				}senao{
					vagas[i]=tp.cadeia_para_inteiro(linha,10)
				}
			}
			arq.fechar_arquivo(arquivo)
		}
		
		
	}
	
	funcao salvar()
	{
		inteiro arquivo = arq.abrir_arquivo(CAMINHO, arq.MODO_ESCRITA)
		cadeia linha
		para(inteiro i=0; i<20; i++){
			linha = tp.inteiro_para_cadeia(vagas[i],10)
			arq.escrever_linha(linha, arquivo)
		}
		arq.fechar_arquivo(arquivo)
	}
	
	funcao espere()
	{
		cadeia esperar
		escreva("\n\n Pressione enter para continuar...")
		leia(esperar)
	}
	
	funcao logico vagasOcupadas(inteiro vaga)
	{
		 se(vagas[vaga-1] == 1){
		 	retorne verdadeiro
		 }senao{
		 	retorne falso
		 }
	}
	
	funcao registrarEntrada()
	{
		abrir()
		inteiro vaga
		escreva("Digite o número da vaga que você deseja registrar uma entrada: \n")
		leia(vaga)
		se(vagasOcupadas(vaga)){
			escreva("Desculpe, esta vaga está ocupada no momento.")
		}senao{
			vagas[vaga-1]=1
			salvar()
			escreva("Sucesso.")
		}
	}
	
	funcao logico vagasVazias(inteiro vaga)
	{
		se(vagas[vaga-1] == 0){
			retorne falso
		}senao{
			retorne verdadeiro
		}
	}
	
	funcao registrarSaida()
	{
		abrir()
		inteiro vaga
		escreva("Digite o número da vaga que você deseja registrar uma saída: \n")
		leia(vaga)
		se(vagasVazias(vaga)){
			vagas[vaga-1]=0
			salvar()
			escreva("Sucesso.")
		}senao{
			escreva("Não há nenhum veículo nesta vaga para que seja possível resgistrar uma saída.")
		}
	}
	
	funcao listarVagas()
	{
		abrir()
		escreva("As vagas serão listadas abaixo. Dois pontos indicam área ocupada, enquanto números áreas vazias.")
		escreva("\n=============================================================\n")
		para(inteiro i=1; i<=20; i++){
			se(vagasOcupadas(i)){
				escreva("|**")
			}senao{
				se(i<10){
					escreva("|0"+i)
				}senao{
					escreva("|"+i)
				}
			}
		}
		escreva("|\n=============================================================")
	}
	
	funcao inicio()
	{
		inteiro opcao
		logico continuar=verdadeiro
		enquanto(continuar){
			
			escreva("GESTÃO DO ESTACIONAMENTO\n\n")
			escreva("Escolha uma das opções:\n")
			escreva("1. Registra entrada\t3. Listar registros\n2. Registrar saídas\t4. Fechar sistema\n")
			leia(opcao)
			limpa()
			
			escolha(opcao){
				caso 1:
				registrarEntrada()
				espere()
				pare
				caso 2:
				registrarSaida()
				espere()
				pare
				caso 3:
				listarVagas()
				espere()
				pare
				caso contrario:
				continuar = falso
			}
		}	
		limpa()
	}
}

/* Exercícios feitos no Portugol Studio */