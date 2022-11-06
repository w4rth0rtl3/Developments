/*

    exclua um usuário;//duda(apoio alisson)
    busque um usuário pelo email;//alisson
    faça backup dos usuários cadastrados;//Daniel e alisson
    faça restauração dos dados;//Duda e Marcela

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, j,  id[1000] ,idB[1000] ;
	int tempo = time(0);
 	char nome[1000][50] ,nomeB[1000][50] , email[1000][50],emailB[1000][50] , sexo[1000][15],sexoB[1000][15] , endereco[1000][50],enderecoB[1000][50];
 	double altura[1000],alturaB[1000];
 	int vacina[1000],vacinaB[1000];
	int index;
	char pemail[50];
 	srand(tempo);
 	
	
	int exclui;
	int continua = 1;
	i = 0;
 	int count = 0;
    int contador = 0;
    int calculo;
    int restauracao = 0;
	int opcao = 0;
    int edita = 0;
    
    
	int countb;
	for(countb = 0; countb < 10; countb++){
		printf("%d ", countb);
	}
	
	printf("%d ", countb);
	

    while(opcao != 8){

        printf("O que voce deseja fazer agora ?\n");
		printf("inclua ate 1000 usuarios: 1\nedite um usuario: 2\nexclua um usuario: 3\nbusque um usuario pelo email: 4\nimprima todos os usuarios cadastrados: 5\nfaca backup dos usuarios cadastrados: 6\nfaca restauracao dos dados: 7\nFinaliza o programa: 8\n\n>");
		fflush(stdin);
		scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            
			for(i = count; i < 1000; i++){
                
                //ID
                //srand(tempo);
                id[i] = rand();
                printf("%d\n ",id[i]);
            
            
                //NOME
                printf("Me forneca o nome:");
                fflush(stdin);
                fgets(nome[i],50,stdin);
            
                
                //EMAIL
                printf("Me forneca o email:");
                fflush(stdin);
                fgets(email[i],50,stdin);
                    
                //printf("\n%s", email[i]);
                
                //printf("%d", strchr(email[i], '@')==0);
                if(strchr(email[i], '@') == 0){
                    printf("Email invalido\n");
                    
                    printf("Me forneca o email:");
                    fflush(stdin);
                    fgets(email[i],50,stdin);
                
                }
                else{
                    printf("Email valido\n");
                }
                
                //SEXO
                printf("Me o sexo (Feminino, Masculino e Nao declarar):");
                fflush(stdin);
                fgets(sexo[i],50,stdin);
                
                if(strcmp(sexo[i], "Feminino") == 0 && strcmp(sexo[i], "Masculino") == 0 && strcmp(sexo[i], "Feminino") == 0){
                    printf("Sexo invalido\n");
                    
                    printf("Me o sexo (Feminino, Masculino e Nao declarar):");
                    fflush(stdin);
                    fgets(sexo[i],50,stdin);
                }else{
                    printf("Sexo valido\n");
                }
                
                
                //ENDERECO
                printf("Me forneca o endereco:");
                fflush(stdin);
                fgets(endereco[i],50,stdin);
                
                
                //ALTURA
                printf("Me forneca a altura:");
                fflush(stdin);
                scanf("%lf", &altura[i]);
                
                printf("%.2lf", altura[i]);
                
                if(altura[i] < 1.00 && altura[i] > 2.00){
                    printf("Altura invalida\n");
                    
                    printf("Me forneca a altura:");
                    fflush(stdin);
                    scanf("%lf", &altura[i]);		
                }
                
                //VACINA
                printf("Tomou vacina ? 1 - sim\n0 - nao\n> ");
                fflush(stdin);
                scanf("%d", &vacina[i]);
                
               
               
                //if nesse espaco é null pode adicionar 
                int continua;	
                printf("Deseja inserir um usuário  1 ou 0?");
                fflush(stdin);
                scanf("%d", &continua);
                
                if(continua == 0){
                    printf("Pessoas cadastradas %d\n", count);
                    break;
                }

                count++;
            }
            contador=count;
            break;

        case 2:
            //edite um usuário
            printf("opcao: %d\n ", opcao);
            
                printf("Digite o index que voce deseja editar: ");
				fflush(stdin);
				scanf("%d", &index); 

				printf("Qual informacao voce deseja alterar ?\n1: Nome\n2: Email\n3: Sexo\n4: Endereco\n5: Altura\n6: Vacina\n\nDigite o numero: ");
				fflush(stdin);
				scanf("%d", &edita);

				switch (edita){
					case 1:
						printf("Me forneca o nome: ");
						fflush(stdin);
						fgets(nome[index], 50,stdin);
				
						break;
					
					case 2:
						printf("Me forneca o email: ");
						fflush(stdin);
						fgets(email[index], 50,stdin);
							
						printf("\n%s", email[i]);
						
						if(strchr(email[index], '@') == 0){
							printf("Email invalido\n");
							
						printf("Me forneca o email: ");
						fflush(stdin);
						fgets(email[index], 50,stdin);
					
					}


						break;
					case 3:
						printf("Forneca o sexo (Feminino, Masculino e Nao declarar): ");
						fflush(stdin);
						fgets(sexo[index], 50,stdin);
						
						if(strcmp(sexo[index], "Feminino") == 0 && strcmp(sexo[index], "Masculino") == 0 && strcmp(sexo[index], "Nao declarar") == 0){
							printf("Sexo invalido\n");
							
							printf("Forneca o sexo (Feminino, Masculino e Nao declarar): ");
							fflush(stdin);
							fgets(sexo[index], 50,stdin);
						}
						break;
					
					case 4:
						printf("Me forneca o endereco: ");
						fflush(stdin);
						fgets(endereco[index], 50,stdin);
						break;

					case 5:
						//ALTURA
						printf("Me forneca a altura: ");
						fflush(stdin);
						scanf("%lf", &altura[i]);
						
						if(altura[i] < 1.00 || altura[i] > 2.00){
							printf("Altura invalida\n"); 		
							
							printf("Me forneca a altura: ");
							fflush(stdin);
							scanf("%lf", &altura[i]);
					}
					
						break;
					
					case 6:
						printf("Tomou vacina (1 ou 0): ");
						fflush(stdin);
						scanf("%d", &vacina[index]);
					break;

					default:
						printf("\nOpcao invalida\n");
						break;
				} 
        
            break;

        case 3:
            //printf("opcao: %d\n", opcao);
            
            printf("Me forneca o index: ");
            fflush(stdin);
            scanf("%d", &exclui);
            
            for(j = exclui; j != count+1; j++){
		
                id[j] = id[j + 1];
                strcpy(nome[j], nome[j + 1]);
                strcpy(email[j], email[j + 1]);
                strcpy(sexo[j], sexo[j + 1]);
                strcpy(endereco[j], endereco[j + 1]);
                altura[j] = altura[j + 1];
                vacina[j] = vacina[j + 1];
                
            }
            count--;
          calculo=contador - count;
            break;

        case 4:
            //busque um usuário pelo email
            printf("opcao: %d\n ", opcao);
            
            printf("Me forneca o email:");
            fflush(stdin);
            fgets(pemail, 50, stdin);
                    
            printf("\n%s", pemail);

            for(i = 0; i < 1000; i++){
                if(strcmp(pemail, email[i]) == 0){
                    i = j;
                   printf("Id: %d\nIndex: %dNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], i, nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);
                }
            }
            
            break;

        case 5:
            //imprima todos os usuários cadastrados
            printf("opcao: %d\n ", opcao);

                for(j = 0; j < count; j++){
                        printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], j, nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);                    
                    }
            /*
            if (calculo > 0 && restauracao == 1){
                 for(j = 0; j < contador; j++){
					printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], j, nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);
				}
            } 
            
            else if (calculo >= 0){
                for(j = 0; j < count; j++){
                        printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], j, nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);
                    }
                }
             */ 
            break;
            
			//Faça backup dos usuários cadastrados
        case 6:
            printf("opcao: %d\n ", opcao);
            
            for(j = 0; j < 1000; j++){
				//printf("a ");		 
	            strcpy(nomeB[j],nome[j]);
				strcpy(emailB[j],email[j] );
				strcpy( sexoB[j],sexo[j] );
				strcpy(enderecoB[j],endereco[j]);
				idB[j] = id[j];
				alturaB[j] = altura[j];
				vacinaB[j] = vacina[j];
			}
			printf("Backup dos usuarios cadastrados realizado com sucesso\n\n");
			
			for(j = 0; j < count; j++){
					printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", idB[j], j, nomeB[j], emailB[j], sexoB[j], enderecoB[j], alturaB[j], vacinaB[j]);
				}
			
        break;

        case 7:
        	//faça restauração dos dados
            printf("opcao: %d\n ", opcao);
          
          
            for(j = 0; j < 5; j++){
					printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", idB[j], j, nomeB[j], emailB[j], sexoB[j], enderecoB[j], alturaB[j], vacinaB[j]);
				}
			
            
             for (j = 0; j < 1000; j++){
	            strcpy(nome[j], nomeB[j]);
				strcpy(email[j], emailB[j] );
				strcpy(sexo[j], sexoB[j] );
				strcpy(endereco[j], enderecoB[j]);
				id[j] = idB[j];
				altura[j] = alturaB[j];
				vacina[j] = vacinaB[j];
				//count = sizeof(enderecoB); 		 
			}
			calculo==0;
          //  restauracao==1;
            count = contador;
        break;

        case 8:
            printf("opcao: %d\n ", opcao);
        break;

        
        default:
            break;
        }

    };

    return 0;
}




// Dias que eu vou chorar vendo esse código nos meus pesadelos 