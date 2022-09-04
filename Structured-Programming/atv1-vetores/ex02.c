/*
Altere o algoritmo anterior considerando que não se conhece quantos alunos esta turma tem
(menos que 50). O número de aluno será informado pelo usuário
*/

#include<stdio.h>

int main(){
    int notas[30];
    int i;

    int quantidade;
    printf("Digite a quantidade de alunos: "); fflush(stdin); scanf("%d", &quantidade);

    for(i = 1; i <= quantidade; i++){
        printf("Digite a %d nota: ", i); fflush(stdin); scanf("%d", &notas[i]);
    }

    printf("\n\n");

    for(i = 1; i <= quantidade; i++){
        printf("Nota %d: %d\n", i, notas[i]);
    }

    return 0;
}