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



struct endereco{
        char rua[30];
        char cidade[30];
        char estado[30];
        char cep[10];
    };

struct cliente 
{
    int id;
    char nome[50] , email[50] , sexo[15];
 	double altura;
 	int vacina;

    struct endereco endereco;

};

struct backup
{
    char nomeB[50],emailB[50],sexoB[15], enderecoB[50];
    double alturaB;
    int vacinaB,idB;

    struct endereco endereco;

};


int menu();
void cadastrar(struct cliente p[1000],int*counte);
void editar(struct cliente p[1000]);
void excluir (struct cliente p[1000],int*count);
void imprimir(struct cliente p[1000], int *count);
void pesquisar(struct cliente p[1000]);
void backupp(struct backup back[1000],struct cliente cadastrado[1000]);
void restauracao(struct cliente cadastrado[1000],struct backup back[1000]);


int main(){

    // declaracao de variaveies
    //temos as do vetor principal como email
    //temos as do backup como emailB
    //temos os contadores i e j

    // as variaveis count e calculo sao usadas para medir e calcualar o tamanho dos vetores (isso sera util no backup e restauracao)
    struct cliente cadastro[1000];
    struct backup backup[1000];
    

	int tempo = time(0); // essa variavel esta sendo utilizada para gerar o ID aleatorio
 	srand(tempo);
 	
	

	

 	int count = 0;
    int contador = 0;
	int opcao = 0;
    int edita = 0;
    
    while(opcao != 8){

        //Menu de opcoes
         opcao = menu();

        switch (opcao)
        {
        case 1:
            // insere dados
			cadastrar(cadastro, &count);
            contador = count; // aumenta a quantidade totoal de usuarios ja cadastrados, de forma geral e o total de entradas ja feitas no sistema
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
            pesquisar(cadastro);
            
            break;

        case 5:
            //imprima todos os usuários cadastrados
            //printf("opcao: %d\n ", opcao);

                imprimir(cadastro, &count);
            break;
            
		case 6:

            //Faça backup dos usuários cadastrados

            //printf("opcao: %d\n ", opcao);
            
            // copia o que estiver no vetor principal para o de backup
            backupp(backup,cadastro);
			
		    imprimir(backup, &count);
			
        break;

        case 7:
        	//faça restauração dos dados

            //copia o que estiver no backup para o vetor principal 
            //printf("opcao: %d\n ", opcao);
          
          	imprimir(backup, &count);
			
             restauracao(cadastro,backup);
          
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


int menu(){ 
        int oopcao;
        printf("\n****************************************************\n" );
        printf("O que voce deseja fazer ?\n");
		printf("inclua ate 1000 usuarios: 1\nedite um usuario: 2\nexclua um usuario: 3\nbusque um usuario pelo email: 4\nimprima todos os usuarios cadastrados: 5\nfaca backup dos usuarios cadastrados: 6\nfaca restauracao dos dados: 7\nFinaliza o programa: 8\n");
        printf("****************************************************\n" );
        fflush(stdin);
        printf("Escolha: ");
		scanf("%d", &oopcao);
        return oopcao;
    }

void cadastrar(struct cliente p[1000], int *counte){
    int i;
    int continua = 1;
    for(i = (*counte); i < 1000; i++){
                
                //ID
                //srand(tempo);
                p[i].id = rand();
                //printf("%d\n ",id[i]); // estavamos usando isso para ter um controle de qual é o id gerado
            
            
                //NOME
                printf("Me forneca o nome: ");
                fflush(stdin);
                fgets(p[i].nome,50,stdin);
            
                
                printf("Nome> %s", p[i].nome);

                //EMAIL
                printf("Me forneca o email: ");
                fflush(stdin);
                fgets(p[i].email, 50, stdin);
                    
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
                fgets(p[i].sexo, 50, stdin);
                
                printf("sexo> %s", p[i].sexo);
             //   printf("%d", strcmp(p[i].sexo, "Feminino"));

                if((strcmp(p[i].sexo, "Feminino") == 0) && (strcmp(p[i].sexo, "Masculino") == 0) && (strcmp(p[i].sexo, "Nao declarar") == 0)){
                    printf("Sexo invalido\n");
                    
                    printf("Me o sexo (Feminino, Masculino e Nao declarar): ");
                    fflush(stdin);
                    fgets(p[i].sexo, 50,stdin);
                }
                
                
                //ENDERECO
             //   printf("Me forneca o endereco: ");
              //  fflush(stdin);
               // fgets(p[i].endereco,50,stdin);
                
                
                //ALTURA
                printf("Me forneca a altura: ");
                fflush(stdin);
                scanf("%f", &p[i].altura);
                

               printf("%.2f", &p[i].altura); //novamente um print para controle
                
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
                
               
                //ENDERECo
                printf("Rua: ");
                fflush(stdin);
                fgets(p[i].endereco.rua, 30, stdin);

                
                printf("Cidade: ");
                fflush(stdin);
                fgets(p[i].endereco.cidade, 30, stdin);



                printf("Estado: ");
                fflush(stdin);
                fgets(p[i].endereco.estado, 30, stdin);


                
                printf("CEP: ");
                fflush(stdin);
                fgets(p[i].endereco.rua, 12, stdin);



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
						//fflush(stdin);
						//fgets(p[index].endereco, 50,stdin);
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

            
            
            
            int j;
            int exclui=0;
            printf("%d\n",*count);

            printf("Me forneca o index:");
            fflush(stdin);
            scanf("%i", &exclui);

            // A logica consiste em encutar um vetor
            // pegamos o que estiver no index a frente e jogamos para o index atual enquanto houver espaco preenchido  
            for(j = exclui; j != (*count)+1; j++){
                
                // Pega atribui o index + 1 ao index
              p[j]=p[j+1];
            }

            // para cada usuario excluido ele diminui o count (variavel que conta a quantidade de usuarios cadastrados)
            (*count)--;
}

void imprimir(struct cliente p[1000], int *count){

   
        for(int j = 0; j < (*count); j++){
            printf("Id: %d\nIndex: %d\nNome: %sEmail: %sSexo: %saltura: %.2f\nvacinou: %d\nRua: %sCidade: %sEstado: %sCEP: %s\n\n", p[j].id, j, p[j].nome, p[j].email, p[j].sexo,p[j].altura, p[j].vacina, p[j].endereco.rua, p[j].endereco.cidade, p[j].endereco.estado, p[j].endereco.cep);                    
        }
        
    
}

void pesquisar(struct cliente p[1000]){
    char pemail[50];
    int j, i;

    printf("Me forneca o email: ");
    fflush(stdin);
    fgets(pemail, 50, stdin);
                    
    printf("\n%s", pemail);

    for(i = 0; i < 1000; i++){

                // se o email fornecido for igual ao pesquisado no vetor ele ira demonstrar todos os dados e o index dele 
        if(strcmp(pemail,p[i].email) == 0){
                 i = j;
                printf("Id: %d\nIndex: %dNome: %sEmail: %sSexo: %sendereco: %saltura: %.2f\nvacinou: %d\n\n", p[j].id, i, p[j].nome, p[j].email, p[j].sexo,p[j].endereco, p[j].altura, p[j].vacina);
        }
     }

}

void backupp(struct backup back[1000],struct cliente cadastrado[1000]){

  for(int j = 0; j < 1000; j++){
					 
	            strcpy(back[j].nomeB,cadastrado[j].nome);
				strcpy(back[j].emailB,cadastrado[j].email );
				strcpy( back[j].sexoB,cadastrado[j].sexo );
				//strcpy(back[j].enderecoB,cadastrado[j].endereco);
				back[j].idB = cadastrado[j].id;
				back[j].alturaB = cadastrado[j].altura;
				back[j].vacinaB = cadastrado[j].vacina;
			}
			printf("Backup dos usuarios cadastrados realizado com sucesso\n\n");

}

void restauracao(struct cliente cadastrado[1000],struct backup back[1000]){

       for (int j = 0; j < 1000; j++){
	            strcpy(cadastrado[j].nome, back[j].nomeB);
				strcpy(cadastrado[j].email, back[j].emailB );
				strcpy(cadastrado[j].sexo, back[j].sexoB );
				//strcpy(cadastrado[j].endereco, back[j].enderecoB);
				cadastrado[j].id = back[j].idB;
				cadastrado[j].altura =back[j]. alturaB;
				cadastrado[j].vacina = back[j].vacinaB; 		 
			}
			
}
