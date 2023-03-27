/*
Faca um programa que armazena um vetor 3 valores, e imprima os valores
utilizando a notação de ponteiro 
*/


#include <stdio.h>

int main(){

    int vetor[3] = {6, 10, 2};
    int *pvetor;
    pvetor = &vetor;
 
    printf("Vetor 0 = %d\nVetor 1 = %d\nVetor 2 = %d\n\n", vetor[0], vetor[1], vetor[2]);
    
    printf("pVetor 0 = %d\n", *pvetor);
    pvetor += 1;

    printf("pVetor 1 = %d\n", *pvetor);
     pvetor += 1;

    
    printf("pVetor 2 = %d\n", *pvetor);
    pvetor += 1;

    return 0;
}