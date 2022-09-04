/*
Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável
composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos
*/

#include <stdio.h>

int main(){
    int dados[100];
    int i;
    int soma = 0;


    for(i = 0; i <= 99; i++){
        printf("Digite o %d valor: ", i); fflush(stdin); scanf("%d", &dados[i]);
        soma += dados[i];
      //  printf("soma %d: ", soma);
    }

    printf("\n\n");
    printf("Soma: %d", soma);

    return 0;
}