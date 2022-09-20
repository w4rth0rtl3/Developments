#include <stdio.h>
#include<stdlib.h>

//responsavel, nome_animal, especie, idade, raca

int main(){
	
	
	// Nome
	char responsavel[50];
	printf("Digite o nome do responsavel: ");
	fflush(stdin);
	fgets(responsavel, 50, stdin);
	
	//nome do animal
	char nome_animal[12];
	printf("Digite o nome do animal: ");
	fflush(stdin);
	fgets(nome_animal, 12, stdin);
	
	// especie
	char especie_animal[50];
	printf("Digite a especie do animal: ");
	fflush(stdin);
	fgets(especie_animal, 50, stdin);
	
	// raça do animal
	char raca_animal[50];
	printf("Digite a raca do animal: ");
	fflush(stdin);
	fgets(raca_animal, 50, stdin);
	
	
	// idade do animal
	int idade_animal;
	printf("Digite a idade do animal: ");
	fflush(stdin);
	scanf("%d", &idade_animal);
	
	
	// Sexo
	char sexo_animal;
	printf("Qual o sexo do animal M ou F: ");
	fflush(stdin);
	scanf("%c", &sexo_animal);
	
	
	
	

	printf("\n\n");
	printf("Responsavel: %s", responsavel);
	printf("nome: %s", nome_animal);
	printf("especie: %s", especie_animal);
	printf("raca: %s", raca_animal);
	printf("idade: %d\n", idade_animal);
	printf("sexo: %c", sexo_animal);

	
}