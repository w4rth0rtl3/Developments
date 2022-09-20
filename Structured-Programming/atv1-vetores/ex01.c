//Escrever um programa que declare um vetor de reais e leia as notas de 30 alunos.
#include<stdio.h>

int main(){
    int notas[30];
    int i;

    

    for(i = 1; i <= 30; i++){
        printf("Digite a %d nota: ", i); 
        fflush(stdin); 
        scanf("%d", &notas[i]);
    }

    printf("\n\n");

    for(i = 1; i <= 30; i++){
        printf("Nota %d: %d\n", i, notas[i]);
    }

    return 0;
}