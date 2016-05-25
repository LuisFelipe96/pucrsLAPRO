#include <stdio.h>

struct scliente{
	char nome[41];		//até 40 caracteres
	int anoNascimento;	//quatro digitos
	char endereco[101];	//até 100 caracteres
	int conta;			//número da conta no vetor contas
	int gdc[15];		//número no Cadastro Ceral de Contribuintes(CGC)
						// 123456789012345						
						//"000.123.1423-00"
	} clientes[2000];
struct sconta{
	int cliente;	//numero do cliente no vetor contas
	int anoAbertura;		//em anos, desde a abertura da conta
	float saldo;	//em reais	
}contas[2000];


int main(){
	strcpy(clientes[0].nome,"Michel Miguel Elias Temer Lulia");
	clientes[0].anoNascimento = 1940;
	strcpy(clientes[0].endereco,"Palacio do Planalto,Brasilia, DF, Brasil");
	clientes.conta[0]=0;
	strcpy(clientes[0].cdg,"123.123.123-12");

	strcpy(clientes[1].nome,"Dilma Vana Rousseff");
	clientes[1].anoNascimento = 1947;
	strcpy(clientes[1].endereco,"Indeterminado,Brasilia, DF, Brasil");
	clientes.conta[1]=1;
	strcpy(clientes[1].cdg,"321.321.321-32");

	strcpy(clientes[1].nome,"José Renan Vasconcelos Calheiros");
	clientes[1].anoNascimento = 1955;
	strcpy(clientes[1].endereco,"Senado FEderal,Brasilia, DF, Brasil");
	clientes.conta[1]=1;
	strcpy(clientes[1].cdg,"666.666.666-66");
	
	contas[0].cliente = 0;
	contas[0].anoAbertura = 2016;
	contas[0].saldo = 100.00;

	contas[1].cliente = 1;
	contas[1].anoAbertura = 2016;
	contas[1].saldo = 200.00;

	contas[2].cliente = 2;
	contas[2].anoAbertura = 2016;
	contas[2].saldo = 300.00;
	


	return 0;
}
