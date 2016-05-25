#include <stdio.h>

struct scliente{
	char nome[41];		//até 40 caracteres
	int idade;			//em anos
	char endereco[101];	//até 100 caracteres
	int conta;			//número da conta no vetor contas
	int gdc;			//número no Cadastro Ceral de Contribuintes(CGC)
	} clientes[2000];
struct sconta{
	int cliente;	//numero do cliente no vetor contas
	int tempo;		//em anos, desde a abertura da conta
	float saldo;	//em reais	
}contas[2000];


int main(){


	return 0;
}
