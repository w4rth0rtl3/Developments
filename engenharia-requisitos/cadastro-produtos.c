#include <stdio.h>
#include<stdlib.h>

//tipo_produto, nome_produto, quantidade_produto

int main(){
	
	
	// Tipo
	char tipo_produto[50];
	printf("Digite o tipo_produto do produto: ");
	fflush(stdin);
	fgets(tipo_produto, 50, stdin);
	

	// Nome
	char nome_produto[50];
	printf("Digite o nome_produto do produto: ");
	fflush(stdin);
	fgets(nome_produto, 50, stdin);


	// quantidade_produto
	int quantidade_produto;
	printf("Digite a quantidade do produto: ");
	fflush(stdin);
	scanf("%d", &quantidade_produto);
	
	
	

	printf("\n\n");
	printf("tipo_produto: %s", tipo_produto);
	printf("nome_produto: %s", nome_produto);
	printf("quantidade_produto: %d\n", quantidade_produto);
	
	
}