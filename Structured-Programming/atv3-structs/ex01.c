/*
Desenvolva um programa em C utilizando registro que permita a entrada de nome,
endereço e telefone de 3 pessoas e os imprima ao final
*/
/*
#include <stdio.h>

int main(){

    int i;

    struct registro{
        char nome[50];
        char endereco[50];
        char telefone[12];

    };

    struct registro pessoa;
    

    for(i = 0; i < 3; i++){
        printf("%d Nome: ", i);
        fflush(stdin);
        fgets(pessoa.nome, 50, stdin);
        
        printf("%d endereco: ", i);
        fflush(stdin);
        fgets(pessoa.endereco, 50, stdin);
        
        printf("%d telefone: ", i);
        fflush(stdin);
        fgets(pessoa.telefone, 50, stdin);


        printf("nome: %s\nendereco %s\ntelefone: %s\n", pessoa.nome, pessoa.endereco, pessoa.telefone);
    }

    return 0;
}

*/

//printf("Comando muito do sql +1", d)

//jotinha (monitor da disciplina) colocou os dados em um vetor
//nome[3][100];
//for ...
//pessoa.nome[i];


#include <stdio.h>

int main(){

    int i;

    struct registro{
        char nome[3][50];
        char endereco[3][50];
        char telefone[3][12];

    };

    struct registro pessoa;
    

    for(i = 0; i < 3; i++){
        printf("%d Nome: ", i);
        fflush(stdin);
        fgets(pessoa.nome[i], 50, stdin);
        
        printf("%d endereco: ", i);
        fflush(stdin);
        fgets(pessoa.endereco[i], 50, stdin);
        
        printf("%d telefone: ", i);
        fflush(stdin);
        fgets(pessoa.telefone[i], 12, stdin);

    }

    for(i = 0; i < 3; i++){
        printf("Pessoa: %d\n", i);
        printf("nome: %sendereco %stelefone: %s\n", pessoa.nome[i], pessoa.endereco[i], pessoa.telefone[i]);
    }

    return 0;
}