/*
Crie um programa em C que receba três números do usuário depois crie uma função
que receba os 3 números como parâmetros: A, B e C. Ordene de tal forma que, ao final
da função, A contenha o menor número e C o maior. Imprima os três números. Obs:
Utilize ponteiro para solucionar o problema.
*/

#include <stdio.h>

int ordena(int *numero);
int main(){

    int numeros[3];
    int i;
    int a, b, c;
    int *pA, *pB, *pC;

    int *pnumeros[3];


    for(i = 0; i < 3; i++){
        printf("Digite o num: ");
        scanf("%d", &numeros[i]);
      //  pnumeros[i] = &numeros[i];

    }

    //pnumeros[i] = &numeros;
    
    printf("pa: %d\npb: %d\npc: %d\n", *pnumeros[0], *pnumeros[1], *pnumeros[2]);

    ordena(numeros);

    printf("pa: %d\npb: %d\npc: %d\n", numeros[0], numeros[1], numeros[2]);

   
    return 0;
}

int ordena(int *numero){

    int maior, menor;

    if(a > b && a > c){
        //printf("%d eh o maior\n", a);
        maior = a;
    }

    else if(b > a && b > c){
       // printf("%d eh o maior\n", b);
        maior = b;
    }

    else if(c > a && c > b){
      //  printf("%d eh o maior\n", c);
        maior = c;
    }


    if(a < b && a < c){
       // printf("%d eh o menor\n", a);
        menor = a;
    }

    
    else if(b < a && b < c){
       // printf("%d eh o menor\n", b);
        menor = b;
    }

    
    else if(c < a && c < b){
      //  printf("%d eh o menor\n", c);
        menor = c;
    }

    printf("Menor %d\n", menor);
   // a = maior;
    printf("maior %d\n", maior);



}


void ordena(int *a, int *b, int *c){

    int maior, menor;

    if(*a > *b && a > c){
        //printf("%d eh o maior\n", a);
        maior = a;
    }

    else if(b > a && b > c){
       // printf("%d eh o maior\n", b);
        maior = b;
    }

    else if(c > a && c > b){
      //  printf("%d eh o maior\n", c);
        maior = c;
    }


    if(a < b && a < c){
       // printf("%d eh o menor\n", a);
        menor = a;
    }

    
    else if(b < a && b < c){
       // printf("%d eh o menor\n", b);
        menor = b;
    }

    
    else if(c < a && c < b){
      //  printf("%d eh o menor\n", c);
        menor = c;
    }

    printf("Menor %d\n", menor);
   // a = maior;
    printf("maior %d\n", maior);



}