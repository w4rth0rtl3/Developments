/*
Crie um programa em C que leia 10 números inteiros e armazene em um vetor 
v. Declare dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, 
e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 podem 
ter  no  máximo  10  elementos,  mas  nem  todas  as  posições  do  vetor  são 
utilizadas. No final escreva os elementos que foram armazenados em v1 e v2.
 */

#include <stdio.h>

int main(){
    int numeros[10], impares[10], pares[10];
    int i, num; 
    int countPares = 0;
    int countImpares = 0;
    
    printf("Pares %d\nimpares %d\n", countPares, countImpares);
   

    for(i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i);
        fflush(stdin);
        scanf("%d", &num);

        numeros[i] = num;
        if(num % 2 == 0){
            //printf("%d eh par", num);
            pares[countPares] = num;
            countPares++;
        }
        else{
            //printf("%d eh impar", num);
            impares[countImpares] = num;
            countImpares++;
        }

    }

    printf("Pares %d\nimpares %d\n", countPares, countImpares);
    printf("Todos os valores:\n");
    for(i = 0; i < 10; i++){
        printf("%d ", numeros[i]);
    }

    printf("\nTendo um total de %d numeros pares\nsendo eles:\n\t");
    for(i = 0; i < countPares; i++){
        printf("%d ", pares[i]);
    }


    printf("\nTendo um total de %d numeros impares\nsendo eles:\n\t");
    for(i = 0; i < countImpares; i++){
        printf("%d ", impares[i]);
    }

    return 0;
}