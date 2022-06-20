/*
Desenvolva um programa que solicite o nome de cinco equipamentos de informática. Compare os cinco
nomes fornecidos para verificar se existe algum solicitado em duplicidade e informe o usuário somente o nome
duplicado
 * /

#include <stdio.h>
#include <ctype.h>
#include <string.h>


// pegar 5 nomes e armazenar em uma lista
// depois percorrer essa lista e ir comparando ela com ela mesma
// então eu compararia equiapamentos[1] com equipamentos[2], equipamentos[3]...
//

int main(){

	char equipamentos[5][20];

	// pega os 5 equipamentos
	for(int i = 0; i != 5; i++){
	
	 	printf("Digite o nome do equipamento:\n");
		fflush(stdin);
		gets(equipamentos[i]);
	} 
	
	// pecorre a lista
	for(int count = 0; count < 5; count++){
		//printf("\n%s, ", equipamentos[count]);
		
		int ret;
		ret = 0;

		//para cada item da lista pecorre a lista denovo  
		for(int comp = 0; comp < 5; comp++){

			// se o item nao for ele mesmo (verifica por numero e não por texto)
			// ou seja se o equipamento atual não for ele na lista de comparaçao
			if(equipamentos[count] != equipamentos[comp]){
				
				//mostra ele, assim eu não comparo o que tá no index 1 com o index 1, evita falsos positivos 
				//printf("\n\t%s", equipamentos[comp]);


				// executar a comparação aqui
				ret = strncmp(equipamentos[count], equipamentos[comp], 20);
				//printf("%d", ret);
				
			
				if(ret == 0){
					printf("%s esta duplicado\n", equipamentos[count]);
				}
		}
			
		} 	

	}
	return 0;	
}
