/*Descrição do Projeto 01:
Utilizando os conceitos de vetor, implemente um algoritmo que:
 //TODOS QUE TIVEREM Asterisco* JA FORAM FEITOS.
 //ATENÇAO PRA FUNCAO DE CADA UM 
 
    inclua até 1000 usuários; ****
    edite um usuário;//marcela(apoio do Daniel) ****
    exclua um usuário;//duda(apoio alisson) ****
    busque um usuário pelo email;//alisson ****
    imprima todos os usuários cadastrados;//Daniel ****
    faça backup dos usuários cadastrados;//Daniel e alisson ****
    faça restauração dos dados;//Duda e Marcela ****
    
    Por ultimo faremos uma reuniao pra editar e melhorar esse codigo , antes da entrega .//Daniel, Alisson, Marcela, Duda.
Dados do usuário:
    Id (int) => preenchido automaticamente por números randômicos ****
    Nome completo (string) ****
    Email (string) => validação do campo: verificar se o caractere "@" aparece ****
    Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Não declarar****
    Endereço (string) ****
    Altura (double) => validação do campo: aceitar valores entre 1 e 2 ****
    Vacina (tomou a vacina? boolean) -> usou int ****
Duas equipes serão sorteadas para realizar a apresentação do projeto, tendo 15 min para cada apresentação.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){

    // declaracao de variaveies
    //temos as do vetor principal como email
    //temos as do backup como emailB
    //temos os contadores i e j

    // as variaveis count e calculo sao usadas para medir e calcualar o tamanho dos vetores (isso sera util no backup e restauracao)

    int i, j,  id[1000] ,idB[1000] ;
	int tempo = time(0); // essa variavel esta sendo utilizada para gerar o ID aleatorio
 	char nome[1000][50] ,nomeB[1000][50], email[1000][50], emailB[1000][50] , sexo[1000][15],sexoB[1000][15] , endereco[1000][50],enderecoB[1000][50];
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
	int opcao = 0;
    int edita = 0;
    
    while(opcao != 8){

        //Menu de opcoes
        printf("\n****************************************************\n" );
        printf("O que voce deseja fazer ?\n");
		printf("inclua ate 1000 usuarios: 1\nedite um usuario: 2\nexclua um usuario: 3\nbusque um usuario pelo email: 4\nimprima todos os usuarios cadastrados: 5\nfaca backup dos usuarios cadastrados: 6\nfaca restauracao dos dados: 7\nFinaliza o programa: 8\n");
        printf("****************************************************\n" );
        fflush(stdin);
        printf("Escolha: ");
		scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // insere dados
			for(i = count; i < 1000; i++){
                
                //ID
                //srand(tempo);
                id[i] = rand();
                //printf("%d\n ",id[i]); // estavamos usando isso para ter um controle de qual é o id gerado
            
            
                //NOME
                printf("Me forneca o nome: ");
                fflush(stdin);
                fgets(nome[i],50,stdin);
            
                
                //EMAIL
                printf("Me forneca o email: ");
                fflush(stdin);
                fgets(email[i],50,stdin);
                    
                //printf("\n%s", email[i]);
                
                //printf("%d", strchr(email[i], '@')==0);
                if(strchr(email[i], '@') == 0){
                    printf("Email invalido\n");
                    
                    printf("Me forneca o email: ");
                    fflush(stdin);
                    fgets(email[i],50,stdin);
                
                }
               
                
                //SEXO
                printf("Me o sexo (Feminino, Masculino e Nao declarar): ");
                fflush(stdin);
                fgets(sexo[i],50,stdin);
                
                if(strcmp(sexo[i], "Feminino") == 0 && strcmp(sexo[i], "Masculino") == 0 && strcmp(sexo[i], "Feminino") == 0){
                    printf("Sexo invalido\n");
                    
                    printf("Me o sexo (Feminino, Masculino e Nao declarar): ");
                    fflush(stdin);
                    fgets(sexo[i],50,stdin);
                }
                
                
                //ENDERECO
                printf("Me forneca o endereco: ");
                fflush(stdin);
                fgets(endereco[i],50,stdin);
                
                
                //ALTURA
                printf("Me forneca a altura: ");
                fflush(stdin);
                scanf("%lf", &altura[i]);
                
               // printf("%.2lf", altura[i]); novamente um print para controle
                
                if(altura[i] < 1.00 && altura[i] > 2.00){
                    printf("Altura invalida\n");
                    
                    printf("Me forneca a altura: ");
                    fflush(stdin);
                    scanf("%lf", &altura[i]);		
                }
                
                //VACINA
                printf("Tomou vacina (0 ou 1): ");
                fflush(stdin);
                scanf("%d", &vacina[i]);
                
               
               
                //if nesse espaco é null pode adicionar 
                int continua;	
                printf("Deseja inserir um usuario (1 ou 0): ");
                fflush(stdin);
                scanf("%d", &continua);
                
                if(continua == 0){
                    printf("Pessoas cadastradas atualmente %d\n", count);
                    break;
                }

                count++; // aumenta a quantidade de usuarios cadastrados no vetor principal
            }
            contador=count; // aumenta a quantidade totoal de usuarios ja cadastrados, de forma geral e o total de entradas ja feitas no sistema
            break;

        case 2:
            //edite um usuário
            //printf("opcao: %d\n ", opcao);
            
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
						printf("Forneca o sexo (Feminino, Masculino e Nao declarar):  ");
						fflush(stdin);
						fgets(sexo[index], 50,stdin);
						
						if(strcmp(sexo[index], "Feminino") == 0 && strcmp(sexo[index], "Masculino") == 0 && strcmp(sexo[index], "Nao declarar") == 0){
							printf("Sexo invalido\n");
							
							printf("Forneca o sexo (Feminino, Masculino e Nao declarar):  ");
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

            // exclui um usuario de acordo com o index dele, para encontrar o index do usuario pesquise o email dele 
            //printf("opcao: %d\n", opcao);
            
            printf("Me forneca o index: ");
            fflush(stdin);
            scanf("%d", &exclui);


            // A logica consiste em encutar um vetor
            // pegamos o que estiver no index a frente e jogamos para o index atual enquanto houver espaco preenchido  
            for(j = exclui; j != count+1; j++){
		
                // Pega atribui o index + 1 ao index
                id[j] = id[j + 1];
                strcpy(nome[j], nome[j + 1]);
                strcpy(email[j], email[j + 1]);
                strcpy(sexo[j], sexo[j + 1]);
                strcpy(endereco[j], endereco[j + 1]);
                altura[j] = altura[j + 1];
                vacina[j] = vacina[j + 1];
                
            }

            // para cada usuario excluido ele diminui o count (variavel que conta a quantidade de usuarios cadastrados)
            count--;
            break;

        case 4:
            //busque um usuário pelo email
            //printf("opcao: %d\n ", opcao);
            
            printf("Me forneca o email: ");
            fflush(stdin);
            fgets(pemail, 50, stdin);
                    
            printf("\n%s", pemail);

            for(i = 0; i < 1000; i++){

                // se o email fornecido for igual ao pesquisado no vetor ele ira demonstrar todos os dados e o index dele 
                if(strcmp(pemail, email[i]) == 0){
                    i = j;
                   printf("Id: %d\nIndex: %dNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], i, nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);
                }
            }
            
            break;

        case 5:
            //imprima todos os usuários cadastrados
            //printf("opcao: %d\n ", opcao);

                for(j = 0; j < count; j++){
                        printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", id[j], j, nome[j], email[j], sexo[j], endereco[j], altura[j], vacina[j]);                    
                    }
            break;
            
		case 6:

            //Faça backup dos usuários cadastrados

            //printf("opcao: %d\n ", opcao);
            
            // copia o que estiver no vetor principal para o de backup
            for(j = 0; j < 1000; j++){
					 
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

            //copia o que estiver no backup para o vetor principal 
            //printf("opcao: %d\n ", opcao);
          
          
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
			}
			
        break;

        case 8:
            printf("Obrigado por utilizar o nosso sistema ^^\n\n");
        break;
        
        default:
            printf("\nOpcao invalida\n");
        }

    };

    return 0;
}