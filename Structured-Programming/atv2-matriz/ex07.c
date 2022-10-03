/*
Crie um programa em C que leia uma matriz 3 x 3 elementos, calcule a soma 
dos elementos que estão na diagonal principal, abaixo da diagonal principal e 
acima da diagonal principal, ao final mostre os três resultados obtidos
*/

#include<stdio.h>

int main(){
    int matriz[3][3];

    int count, i, j;
    int countAcima = 0;
    int countAbaixo = 0;
    count = 0;
    int somaAcima, somaAbaixo;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = count;
            count++;       
        }
    }

    printf("\nMatriz completa: \n");
    count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);

        }
        printf("\n");
    }


    printf("\n\nDiagonal Principal:\n");
    count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            //printf("%d ", matriz[i][j]);

            if(j == count){
                printf("%d ", matriz[i][j]);
            
            }

        }
        count ++;
    }

    
    printf("\n\nDiagonal Acima: \n");
    count = 0;
    somaAcima = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            //printf("%d ", matriz[i][j]);

            if(j == (count + 1)){
                printf("%d ", matriz[i][j]);
                somaAcima += matriz[i][j];
            }

        }
        count++;
    }

    printf("\n\nDiagonal Abaixo: \n");
    count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            //printf("%d ", matriz[i][j]);

            if(j == (count - 1)){
                printf("%d ", matriz[i][j]);
                somaAbaixo += matriz[i][j];
            }

        }

        count++;
    }

    printf("\n\n\nA soma dos elementos acima da diagonal principal eh:\n%d \n\nA soma dos elementos abaixo da diagonal principal eh:\n%d", somaAcima, somaAbaixo);
    return 0;
}