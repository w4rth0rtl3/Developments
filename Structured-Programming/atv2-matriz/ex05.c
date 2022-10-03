/*
Desenvolva  um  programa  em  C  que  leia  duas  matrizes  4  x  4  e  escreva  uma 
terceira com os maiores valores de cada posição das matrizes lida
*/

#include <stdio.h>

int main(){
    #define DIMENSAO 3
    

    int matriz1[DIMENSAO][DIMENSAO], matriz2[DIMENSAO][DIMENSAO], matriz3[DIMENSAO][DIMENSAO];

    printf("%d", DIMENSAO);

    
    int i, j;
    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            printf("[%d][%d]: ", i, j);
            fflush(stdin);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("\nProxima Matriz\n");
    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            printf("[%d][%d]: ", i, j);
            fflush(stdin);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            if(matriz1[i][j] > matriz2[i][j]){
                matriz3[i][j] = matriz1[i][j]; 
            }else{
                matriz3[i][j] = matriz2[i][j];
            }
        }
        printf("\n");
    }

    printf("\n");
    for(i = 0; i < DIMENSAO; i++){
        for(j = 0; j < DIMENSAO; j++){
            printf("%d ", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}