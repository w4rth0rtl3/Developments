/*
Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que 
foram lidas
*/

#include <stdio.h>
#include <strings.h>

int main(){

    int letras[30];
    int count;

    printf("Digite uma palavra de ate 30 letras: ");
    fflush(stdin);
    fgets(letras, 30, stdin);

    //printf(letras);
    strrev(letras); // Decidi usar uma biblioteca para fazer isso
    printf("\n\n\n%s\n", letras);


   /* for(count = 30; count >= 0; count--){
        printf("%c", letras[count]); 
    
    }*/

    return 0;
}