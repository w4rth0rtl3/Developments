/*
Escrever um programa que declare um veto de intreros,
leia e imprima as idades de 5 leitores
*/


// Vetor: 0 - 1000
// STRING
// 012345

#include<stdio.h>

int main(){

    
    int i, tot_alunos;

    printf("Digite o total de alunos : ");
    fflush(stdin);
    scanf("%d", &tot_alunos);

    int idade[tot_alunos];


    for(i = 0; i <= tot_alunos; i++){
        printf("Digita a %d idade: ", i);
        fflush(stdin);
        scanf("%d", &idade[i]);
    }

       for(i = 0; i <= tot_alunos; i++){
            printf("Idade do %d aluno: %d\n", i, idade[i]);
        }
}