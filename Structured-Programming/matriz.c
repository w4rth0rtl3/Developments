// matriz é um vetor de vetor kk 
// é de um unico tipo de dado
// trabalha linha e coluna 
#include <stdio.h>

int main(){

    char nao_matriz[2][2];
    char nome[50];
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite o nome para[%d][%d]: ", i, j);
            fflush(stdin);
            fgets(nome, 50, stdin);
            nao_matriz[i][j] = &nome;;
        }
    }

    
    for(i = 0; i < 2; i++){
        printf("\n\t");
        for(j = 0; j < 2; j++){
            printf("%s ",  nao_matriz[i][j]);
        }
    }
   /* 
    int matriz[3][3][3];
    int i, j, k;

    for(i = 0; i < 3; i++){
        printf("%d ", i);
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
               printf("Digite o numero desejado [%d][%d][%d]:", i, j, k);
                scanf("%d", &matriz[i][j][k]);
        }
        }
    }


    
    
    for(i = 0; i < 3; i++){
        printf("\n\t");
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
               printf("%d ", matriz[i][j][k]);
        }
        }
    }*/

    return 0;
}