/*
Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além 
de  identificar  a  mais  velha  e  a  posição  em  que  ela  se  encontra  no  vetor.  A  idade  mais  velha 
pode aparecer em mais de uma posição.
*/

#include <stdio.h>

int main(){
    int idade[5], index_velha[5];
    int i, mais_velha, cont_velha, tot_idade = 0;
    cont_velha = 0;
    char resp = 's';

    do{
        printf("Digite a %do idade: ", i);
        fflush(stdin);
        scanf("%d", &idade[i]);

        tot_idade += idade[i];
  
        if(i == 0){
            mais_velha = idade[i];
        }

        else if (idade[i] >= mais_velha){
            mais_velha = idade[i]; //idade mais velha
        }

        i++;

        printf("Deseja continuar ? (s - n)\n");
        fflush(stdin);
        scanf("%c", &resp);
        
    }while(resp != 'n');

//    printf("tot_idade: %d\n", tot_idade);
    printf("A media foi: %d\n", (tot_idade / 5));
    printf("A idade mais velha foi: %d e aparece no:", mais_velha);
 
    int j = i;
    for(i = 0; i < j; i++){ 
        if(mais_velha == idade[i]){
            index_velha[cont_velha] = i;
            cont_velha++;
            printf("\n\tindex %d", i);            
        }
    }
}