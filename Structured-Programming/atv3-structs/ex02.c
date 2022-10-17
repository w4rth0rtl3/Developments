/*
Criar um registro chamado DadosAluno, que armazene o nome e idade de um aluno.
Na função main: criar uma variável que é uma estrutura DadosAluno; ler o nome e a idade
de um aluno e armazenar na variável criada; exibir na tela o nome do aluno e a idade do
aluno
*/

#include<stdio.h>

struct DadosAluno{
    char nome[50];
    int idade;
};


int main(){

    struct DadosAluno monitor;

    

    printf("Digite o nome do aluno: ");
    fflush(stdin);
    fgets(monitor.nome, 50, stdin);

    printf("Digite a idade do %s: ", monitor.nome);
    scanf("%d", &monitor.idade);

    printf("O monitor %stem %d anos", monitor.nome, monitor.idade);
    
    return 0;
}

// Eu queria tira o \n do fgets