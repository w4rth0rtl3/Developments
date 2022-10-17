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
#define QUANTIDADE 3

int main(){

/*    
    long int telefone;
    printf("Telefone de teste: ");
    scanf("%ld", &telefone);
    printf("\n\nTelefone: %d", telefone);

Eu estava testando se conseguia armazenar o telefone com ddd e 55

*/

    struct cadastro{
        char nome[50];
        //char endereco[50];
        float salario;
        char identidade[30];
        char cpf[15]; //xxx.xxx.xxx-xx
        char estadoCivil[20];
        char telefone[14]; //xxxxxxxxxxxxx
        int idade;
        char sexo; // F M N

    };

    struct endereco{
            char rua[30];
            char bairro[30];
            char cidade[30];
            char estado[30];
            char cep[8]; //xxxxxxxx
        };

    struct cadastro cadastros[QUANTIDADE]; // cria um vetor Cadastro com 5 elementos
    struct endereco enderecos[QUANTIDADE];
    char homens[QUANTIDADE][50]; // Uma lista (matriz) que vai conter o nome completo de todos os homens, sendo que isso pode ser todos os cadastrados
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
        
        /* comentei o resto do conteúdo para testar o item c
        printf("ex: 123.456.789-10\n");
        printf("Digite o CPF: ");
        fflush(stdin);
        fgets(cadastros[i].cpf, 15, stdin);

        printf("Identidade (RG): ");
        fflush(stdin);
        fgets(cadastros[i].identidade, 30, stdin);

        printf("Digite o telefone: ", i);
        fflush(stdin);
        fgets(cadastros[i].telefone, 14, stdin);
        */
        printf("(F)eminino (M)asculino (N)ao-binario\n");
        printf("Sexo: ");
        fflush(stdin);
        scanf("%c", &cadastros[i].sexo);

        /*
        printf("Salario: ");
        fflush(stdin);
        scanf("%f", &cadastros[i].salario);

        printf("Estado Civil: ");
        fflush(stdin);
        fgets(cadastros[i].estadoCivil, 20, stdin);
        */
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

        if(cadastros[i].sexo == 'M' || cadastros[i].sexo == 'm'){
            homens[i][i] = cadastros[i].nome; //To com duvida aqui kk
        }
    }

    printf("A pessoa mais velha tem %d anos\n", maisVelho); // c
    printf("Lista dos homens:\n");

    for(i = 0; i < QUANTIDADE; i++){
        printf("%s ", homens[i][i]);

    }
    
/*
    for(i = 0; i < QUANTIDADE; i++){
        printf("\nDados %d:\n\n", i);
        printf("Nome: %sIdade: %d\nCPF: %sIdentidade: %sTelefone: %sSexo: %c\nSalario: %.2f\nEstado civil: %s", cadastros[i].nome,cadastros[i].idade, cadastros[i].cpf,cadastros[i].identidade, cadastros[i].telefone, cadastros[i].sexo, cadastros[i].salario, cadastros[i].estadoCivil);

    }
*/
    return 0;
}