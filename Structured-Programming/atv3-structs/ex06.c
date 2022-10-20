/*
Definir  a estrutura cuja  representação  gráfica é  dada  a  seguir,  definir  os  campos  com 
os tipos básicos necessários

a) Crie um vetor Cadastro com 5 elementos. 
b) Permita ao usuário entrar com dados para preencher esses 5 cadastros. 
c) Encontre a pessoa com maior idade entre os cadastrados 
d) Encontre as pessoas do sexo masculino 
e) Encontre as pessoas com salário maior que 1000. 
f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo 
usuário

*/

#include <stdio.h>
#define QUANTIDADE 2
#include <strings.h>

int main(){

    struct endereco{
            char rua[30];
            char bairro[30];
            char cidade[30];
            char estado[30];
            char cep[8]; //xxxxxxxx
        };


    struct cadastro{
        char nome[50];
        //char endereco[50];
        float salario;
        char identidade[3];
        char cpf[15]; //xxx.xxx.xxx-xx
        char estadoCivil[20];
        char telefone[14]; //xxxxxxxxxxxxx
        int idade;
        char sexo; // F M N

        struct endereco end;

    };

    struct cadastro cadastros[QUANTIDADE]; // cria um vetor Cadastro com 5 elementos
    //struct endereco enderecos[QUANTIDADE];
    char homens[QUANTIDADE][50]; // Uma lista (matriz) que vai conter o nome completo de todos os homens, sendo que isso pode ser todos os cadastrados
    char pessoas1000[QUANTIDADE][20]; // Define um vetor para armazenar o nome de cada pessoa que ganhar mais de 1000  
    int i;

    //Permita ao usuário entrar com dados para preencher esses 5 cadastros
    
    for(i = 0; i < QUANTIDADE; i++){
        printf("\nCadastro %d\n", i);
        printf("Digite o nome: ", i);
        fflush(stdin);
        fgets(cadastros[i].nome, 50, stdin);

        
        printf("Digite a idade: ");
        fflush(stdin);
        scanf("%d", &cadastros[i].idade);
        
        /* comentei o resto do conteúdo para testar o item c */
        printf("ex: 123.456.789-10\n");
        printf("Digite o CPF: ");
        fflush(stdin);
        fgets(cadastros[i].cpf, 15, stdin);

        printf("Identidade (RG): ");
        fflush(stdin);
        fgets(cadastros[i].identidade, 3, stdin);

        printf("Digite o telefone: ", i);
        fflush(stdin);
        fgets(cadastros[i].telefone, 14, stdin);
 
        printf("(F)eminino (M)asculino (N)ao-binario\n");
        printf("Sexo: ");
        fflush(stdin);
        scanf("%c", &cadastros[i].sexo);

        
        printf("Salario: ");
        fflush(stdin);
        scanf("%f", &cadastros[i].salario);

        
        printf("Estado Civil: ");
        fflush(stdin);
        fgets(cadastros[i].estadoCivil, 20, stdin);

        printf("Endereço:\n");
        
        printf("cidade: ");
        fflush(stdin);
        fgets(cadastros[i].end.cidade, 50, stdin);
        
        
        printf("cep: ");
        fflush(stdin);
        fgets(cadastros[i].end.cep, 50, stdin);
    
        printf("bairro: ");
        fflush(stdin);
        fgets(cadastros[i].end.bairro, 50, stdin);

        
        printf("estado: ");
        fflush(stdin);
        fgets(cadastros[i].end.estado, 50, stdin);
    
        printf("rua: ");
        fflush(stdin);
        fgets(cadastros[i].end.rua, 50, stdin);
    }

    //C) Encontre a pessoa com maior idade entre os cadastrados
    int maisVelho;
    int count;

    for(i = 0; i < QUANTIDADE; i++){
        if(i == 0){
            maisVelho = cadastros[i].idade;
        }
        if(cadastros[i].idade > maisVelho){
            maisVelho = cadastros[i].idade; // encontra o mais velho
        }

        //Encontra os homens da lista
        if(cadastros[i].sexo == 'M' || cadastros[i].sexo == 'm'){
           // homens[i][i] = cadastros[i].nome; //To com duvida aqui kk
          // homens[i] = cadastros[i].nome;
           strcpy(homens[i], cadastros[i].nome); // Copia a string para dentro da matriz / vetor.


           // A professora explicou em aula (isso demorou uma semana kk)
           //PS: até o momento eu estava tentando fazer manualmente, tendo em vista que não haviamos visto conteúdos de strings
           //A minha opção era copiar char por char e usar o \0 e o \n para delimitar os prints
        
        }

        // Armazena os nomes de pessoas com salario maior que 1000
        if(cadastros[i].salario > 1000){
            strcpy(pessoas1000[i], cadastros[i].nome);
        }
    }

    printf("\n\nA pessoa mais velha tem %d anos\n", maisVelho); // item c

    printf("\nLista dos homens:\n"); // item d

    for(i = 0; i < QUANTIDADE; i++){
        printf("%s", homens[i]);
    }

    printf("\nPessoas com o salario maior que 1000:\n"); //item e
    for(i = 0; i < QUANTIDADE; i++){
        printf("%s", pessoas1000[i]);
    }

    //item f
    char pergunta;
    char consulta[30];
    printf("\nConsultar RG (S ou N): ");
    fflush(stdin);
    scanf("%c", &pergunta);

    if(pergunta == 'S' || pergunta == 's'){
        printf("Digite o rg: ");
        fflush(stdin);
        fgets(consulta, 3, stdin);

        //printf("%s", consulta); // usando para testes
       
        for(i = 0; i < QUANTIDADE; i++){
            printf("%d\n", i);
            if(consulta == cadastros[i].identidade){
                printf("Nome: %sIdade: %d\nCPF: %sIdentidade: %sTelefone: %sSexo: %c\nSalario: %.2f\nEstado civil: %s", cadastros[i].nome,cadastros[i].idade, cadastros[i].cpf,cadastros[i].identidade, cadastros[i].telefone, cadastros[i].sexo, cadastros[i].salario, cadastros[i].estadoCivil);
                break;
            }
        }
    }
/*
    for(i = 0; i < QUANTIDADE; i++){
        printf("\nDados %d:\n\n", i);
        printf("Nome: %sIdade: %d\nCPF: %sIdentidade: %sTelefone: %sSexo: %c\nSalario: %.2f\nEstado civil: %s", cadastros[i].nome,cadastros[i].idade, cadastros[i].cpf,cadastros[i].identidade, cadastros[i].telefone, cadastros[i].sexo, cadastros[i].salario, cadastros[i].estadoCivil);

    }
*/

    return 0;
}