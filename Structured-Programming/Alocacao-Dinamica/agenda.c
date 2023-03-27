//Agenda de telefones 
//Temos uma limitação, precisamos de um espaço dinamico 
// sua agenda pode ter 14 contatos a minha tem 1499 
/*

strut agenda
    codigo
    nome
    telefoone


// Em alocação dinamica o proximo dado vai estar em um espaco vazio de memoria aleatorio
// em vetor / lista eles são alocados de forma sequencial (endereco sequencial)


A alocacao dinamica diz onde esta o proximo elemento, voce estara sempre precisando do endereco de memoria do proximo dado

vamos precisar trabalhar bem com ponteiros 

o ultimo dado tera um ponteiro que aponta para null (fim)


Lista simplesmente encadedada, duplamente
fila, pilha.

Podemos alocar espaço até o fim da memória 

Qual o tipo de dado de uma variavel ponteiro ?
eh o tipo de dado para o qual ele aponta ]

Era mais facil ter essa matéria se tivesse banco de dados antes 

*/

#include <stdio.h>


typedef struct agenda{

    int codigo;
    char nome[40], tefelone[20];
    struct agenda *ponteiro;
    
} Agenda;
int main(){

    int a;
    a = sizeof(double);
    printf("%d", a);

//typedef define um apelido para o struct no caso Agenda

    Agenda* pessoa; // Cria a lista pessoa do tipo agenda 
    pessoa = NULL; // zerando a lista 

    if(pessoa == NULL){
        printf("Lista esta vazia !\n\n");
    }


    Agenda* novo;
    novo = (Agenda*) malloc(sizeof(Agenda));

    printf("%d\n", novo);
    
    printf("\n Digite o codigo: ");
    scanf("%d", &novo->nome);

    printf("\n Digite o nome: ");
    fflush(stdin);
    gets(novo->nome);

    printf("\n Digite o telefone: ");
    fflush(stdin);
    gets(novo->tefelone);

    fflush(stdin);

    novo->ponteiro = pessoa;
    pessoa = novo;


    return 0;
}