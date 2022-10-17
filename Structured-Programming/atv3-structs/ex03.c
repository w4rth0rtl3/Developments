/*
  Escreva as instruções necessárias para definir um tipo de ESTRUTURA que contenha 
2 elementos, uma “STRING” de 10 caracteres e um INTEIRO
*/


#include<stdio.h>

struct DadosAluno{
    char nome[10];
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