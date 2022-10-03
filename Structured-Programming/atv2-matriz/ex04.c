/*
Crie  um  programa  em  C  que  leia  os  elementos  de  uma  matriz  inteira  6  x  6  e 
imprima todos os elementos, exceto os elementos da diagonal principal.
*/

#include <stdio.h>

int main(){

    int matriz[6][6];

    int count = 0;
    int i, j, k;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            printf("Digite um valor para [%d[%d]: ",i, j);
            fflush(stdin);
            scanf("%d", &matriz[i][j]);
            //count++;
        }    
    }

    //Testando com valores menores sempre (mostra a matriz completa)
/*
    for(i = 0; i < 3; i++){
        printf("\n");
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
            //count++;
        }    
    }

    printf("\n\n\n");
*/
    for(i = 0; i < 6; i++){
        printf("\n");
        for(j = 0; j < 6; j++){
            if(j == count){
                printf("\\ ");
            }
            else{
                printf("%d ", matriz[i][j]);
            }
        }
        count++; 
         
    }

    return 0;
}