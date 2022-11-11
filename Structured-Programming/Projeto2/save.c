#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>




struct cliente
{
    int id;
    char nome[50] , email[50] , sexo[15] ,endereco[50];
 	double altura;
 	int vacina;

};

struct backup
{
    char nomeB[50],emailB[50],sexoB[15],enderecoB[50];
    double alturaB;
    int vacinaB,idB;
};

int menu(){ 
    int opcao;
        printf("\n****************************************************\n" );
        printf("O que voce deseja fazer ?\n");
		printf("inclua ate 1000 usuarios: 1\nedite um usuario: 2\nexclua um usuario: 3\nbusque um usuario pelo email: 4\nimprima todos os usuarios cadastrados: 5\nfaca backup dos usuarios cadastrados: 6\nfaca restauracao dos dados: 7\nFinaliza o programa: 8\n");
        printf("****************************************************\n" );
        fflush(stdin);
        printf("Escolha: ");
		scanf("%d", &opcao);
        return opcao;
    }

void cadastrar(struct cliente p[1000],int*counte){
    int i;
    int continua = 1;
    for(i = (*counte); i < 1000; i++){
                
                //ID
                //srand(tempo);image.png
                p[i].id = rand();
                //printf("%d\n ",id[i]); // estavamos usando isso para ter um controle de qual é o id gerado
            
            
                //NOME
                printf("Me forneca o nome: ");
                fflush(stdin);
                fgets(p[i].nome,50,stdin);
            
                
                //EMAIL
                printf("Me forneca o email: ");
                fflush(stdin);
                fgets(p[i].email,50,stdin);
                    
                //printf("\n%s", email[i]);
                
                //printf("%d", strchr(email[i], '@')==0);
                if(strchr(p[i].email, '@') == 0){
                    printf("Email invalido\n");
                    
                    printf("Me forneca o email: ");
                    fflush(stdin);
                    fgets(p[i].email,50,stdin);
                
                }
               
                
                //SEXO
                printf("Me o sexo (Feminino, Masculino e Nao declarar): ");
                fflush(stdin);
                fgets(p[i].sexo,50,stdin);
                
                if(strcmp(p[i].sexo, "Feminino") == 0 && strcmp(p[i].sexo, "Masculino") == 0 && strcmp(p[i].sexo, "Feminino") == 0){
                    printf("Sexo invalido\n");
                    
                    printf("Me o sexo (Feminino, Masculino e Nao declarar): ");
                    fflush(stdin);
                    fgets(p[i].sexo,50,stdin);
                }
                
                
                //ENDERECO
                printf("Me forneca o endereco: ");
                fflush(stdin);
                fgets(p[i].endereco,50,stdin);
                
                
                //ALTURA
                printf("Me forneca a altura: ");
                fflush(stdin);
                scanf("%lf", &p[i].altura);
                
               // printf("%.2lf", altura[i]); novamente um print para controle
                
                if(p[i].altura < 1.00 && p[i].altura > 2.00){
                    printf("Altura invalida\n");
                    
                    printf("Me forneca a altura: ");
                    fflush(stdin);
                    scanf("%lf", &p[i].altura);		
                }
                
                //VACINA
                printf("Tomou vacina (0 ou 1): ");
                fflush(stdin);
                scanf("%d", &p[i].vacina);
                
               
                  (*counte)++;  // aumenta a quantidade de usuarios cadastrados no vetor principal

                //if nesse espaco é null pode adicionar 
                int continua;	
                printf("Deseja inserir um usuario (1 ou 0): ");
                fflush(stdin);
                scanf("%d", &continua);
                
                if(continua == 0){
                    printf("Pessoas cadastradas atualmente %d\n", (*counte));
                    break;
                }

                 // aumenta a quantidade de usuarios cadastrados no vetor principal
            }
            
    
}


void editar(struct cliente p[1000]){
    
    int edita,index;
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
                         fgets(p[index].nome,50,stdin);
				
						break;
					
					case 2:
						printf("Me forneca o email: ");
						fflush(stdin);
						fgets(p[index].email, 50,stdin);
							
						printf("\n%s", p[index].email);
						
						if(strchr(p[index].email, '@') == 0){
							printf("Email invalido\n");
							
						printf("Me forneca o email: ");
						fflush(stdin);
						fgets(p[index].email, 50,stdin);
					
					}


						break;
					case 3:
						printf("Forneca o sexo (Feminino, Masculino e Nao declarar):  ");
						fflush(stdin);
						fgets(p[index].sexo, 50,stdin);
						
						if(strcmp(p[index].sexo, "Feminino") == 0 && strcmp(p[index].sexo, "Masculino") == 0 && strcmp(p[index].sexo, "Nao declarar") == 0){
							printf("Sexo invalido\n");
							
							printf("Forneca o sexo (Feminino, Masculino e Nao declarar):  ");
							fflush(stdin);
							fgets(p[index].sexo, 50,stdin);
						}
						break;
					
					case 4:
						printf("Me forneca o endereco: ");
						fflush(stdin);
						fgets(p[index].endereco, 50,stdin);
						break;

					case 5:
						//ALTURA
						printf("Me forneca a altura: ");
						fflush(stdin);
						scanf("%lf", &p[index].altura);
						
						if(p[index].altura < 1.00 || p[index].altura > 2.00){
							printf("Altura invalida\n"); 		
							
							printf("Me forneca a altura: ");
							fflush(stdin);
							scanf("%lf", &p[index].altura);
					}
					
						break;
					
					case 6:
						printf("Tomou vacina (1 ou 0): ");
						fflush(stdin);
						scanf("%d", &p[index].vacina);
					break;

					default:
						printf("\nOpcao invalida\n");
						break;
				} 
        
}

void excluir (struct cliente p[1000],int*count){
     // exclui um usuario de acordo com o index dele, para encontrar o index do usuario pesquise o email dele 
            //printf("opcao: %d\n", opcao);
            int j,exclui;
            printf("Me forneca o index: ");
            fflush(stdin);
            scanf("%d", &exclui);


            // A logica consiste em encutar um vetor
            // pegamos o que estiver no index a frente e jogamos para o index atual enquanto houver espaco preenchido  
            for(j = exclui; j != (*count)+1; j++){
		
                // Pega atribui o index + 1 ao index
                p[j].id = p[j + 1].id;
                strcpy(p[j].nome, p[j + 1].nome);
                strcpy(p[j].email, p[j + 1].email);
                strcpy(p[j].sexo, p[j + 1].sexo);
                strcpy(p[j].endereco[j], p[j + 1].endereco);
                p[j].altura = p[j + 1].altura;
                p[j].vacina = p[j + 1].vacina;
                
            }

            // para cada usuario excluido ele diminui o count (variavel que conta a quantidade de usuarios cadastrados)
            (*count)--;
}


int main(){

    // declaracao de variaveies
    //temos as do vetor principal como email
    //temos as do backup como emailB
    //temos os contadores i e j

    // as variaveis count e calculo sao usadas para medir e calcualar o tamanho dos vetores (isso sera util no backup e restauracao)
    struct cliente cadastro[1000];
    struct backup backup[1000];
    
    

    int i, j  ;
	int tempo = time(0); // essa variavel esta sendo utilizada para gerar o ID aleatorio
	int index;
	char pemail[50];
 	srand(tempo);
 	
	
	int exclui;
	
	i = 0;
 	int count = 0;
    int contador = 0;
	int opcao = 0;
    int edita = 0;
    
    while(opcao != 8){

        //Menu de opcoes
         opcao= menu();

        switch (opcao)
        {
        case 1:
            // insere dados
			cadastrar(cadastro,&count);
          

            contador=count; // aumenta a quantidade totoal de usuarios ja cadastrados, de forma geral e o total de entradas ja feitas no sistema
            break;

        case 2:
            //edite um usuário
            //printf("opcao: %d\n ", opcao);
            editar(cadastro);
            break;

        case 3:
            excluir(cadastro,&count);
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
                if(strcmp(pemail,cadastro[index].email) == 0){
                    i = j;
                   printf("Id: %d\nIndex: %dNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", cadastro[j].id, i, cadastro[j].nome, cadastro[j].email, cadastro[j].sexo,cadastro[j].endereco, cadastro[j].altura, cadastro[j].vacina);
                }
            }
            
            break;

        case 5:
            //imprima todos os usuários cadastrados
            //printf("opcao: %d\n ", opcao);

                for(j = 0; j < count; j++){
                        printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", cadastro[j].id, j, cadastro[j].nome, cadastro[j].email, cadastro[j].sexo,cadastro[j].endereco, cadastro[j].altura, cadastro[j].vacina);                    
                    }
            break;
            
		case 6:

            //Faça backup dos usuários cadastrados

            //printf("opcao: %d\n ", opcao);
            
            // copia o que estiver no vetor principal para o de backup
            for(j = 0; j < 1000; j++){
					 
	            strcpy(backup[j].nomeB,cadastro[j].nome);
				strcpy(backup[j].emailB,cadastro[j].email );
				strcpy( backup[j].sexoB,cadastro[j].sexo );
				strcpy(backup[j].enderecoB,cadastro[j].endereco);
				backup[j].idB = cadastro[j].id;
				backup[j].alturaB = cadastro[j].altura;
				backup[j].vacinaB = cadastro[j].vacina;
			}
			printf("Backup dos usuarios cadastrados realizado com sucesso\n\n");
			
			for(j = 0; j < count; j++){
					printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", backup[j].idB, j, backup[j].nomeB, backup[j].emailB, backup[j].sexoB, backup[j].enderecoB, backup[j].alturaB, backup[j].vacinaB);
				}
			
        break;

        case 7:
        	//faça restauração dos dados

            //copia o que estiver no backup para o vetor principal 
            //printf("opcao: %d\n ", opcao);
          
          
            for(j = 0; j < 5; j++){
					printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n",backup[j].idB, j, backup[j].nomeB, backup[j].emailB, backup[j].sexoB, backup[j].enderecoB, backup[j].alturaB, backup[j].vacinaB);
				}
			
            
             for (j = 0; j < 1000; j++){
	            strcpy(cadastro[j].nome, backup[j].nomeB);
				strcpy(cadastro[j].email, backup[j].emailB );
				strcpy(cadastro[j].sexo, backup[j].sexoB );
				strcpy(cadastro[j].endereco, backup[j].enderecoB);
				cadastro[j].id = backup[j].idB;
				cadastro[j].altura =backup[j]. alturaB;
				cadastro[j].vacina = backup[j].vacinaB; 		 
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