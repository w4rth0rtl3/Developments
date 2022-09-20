#include <stdio.h>
#include<stdlib.h>

//Nome, cpf, e-mail, telefone, dados-bancarios, endereço

int main(){
	
	
	// Nome
	char nome_cliente[50];
	printf("Digite o seu nome: ");
	fflush(stdin);
	fgets(nome_cliente, 50, stdin);
	
	//cpf
	char cpf_cliente[12];
	printf("Digite o ceu cpf : ");
	fflush(stdin);
	fgets(cpf_cliente, 12, stdin);
	
	// Email
	char email_cliente[50];
	printf("Digite o seu email: ");
	fflush(stdin);
	fgets(email_cliente, 50, stdin);
	
	// telefone
	char telefone_cliente[50];
	printf("Digite o seu telefone: ");
	fflush(stdin);
	fgets(telefone_cliente, 50, stdin);
	
	
	// endereco
	char endereco_cliente[100];
	printf("Digite o seu endereco: ");
	fflush(stdin);
	fgets(endereco_cliente, 100, stdin);
	
	
	//dados bancarios
	char dados_bancarios[3][50];
	printf("Numeros do cartao: ");
	fflush(stdin);
	fgets(dados_bancarios[0], 10, stdin);
	
	printf("CVV: ");
	fflush(stdin);
	fgets(dados_bancarios[1], 4, stdin);
	
	printf("Data de validade do cartao: ");
	fflush(stdin);
	fgets(dados_bancarios[2], 12, stdin);
	
	
	
	printf("\n\n");
	printf("Nome: %s", nome_cliente);
	printf("CPF: %s", cpf_cliente);
	printf("Email: %s", email_cliente);
	printf("Telefone: %s", telefone_cliente);
	
	printf("Dados do cartao:\n\tNOME: %s\tNumeros do cartao: %s\tCVV: %s\n\tData cartao: %s", nome_cliente, dados_bancarios[0], dados_bancarios[1], dados_bancarios[2]);
	
}