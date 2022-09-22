/* Neste problema você deve ler um número, indicando uma liha da matriz na qual uma operação
deve ser realizada, um caractere maiúsculo indicando a operaççao que será realizada
e todos os elementod de uma matriz M[12][12]. Em
seguida calcule e mostre a soma ou a média dos elementos
que estão na área verda da matriz, conforme o caso.
A imagem abaixo ilustra o caso da entrada do valor 2
para cada linha da matrizm demonstrando os elementos que deverão ser considerados na operação
*/

#include <stdio.h>

int main(){

    int m[12][12];
    int i, j, count = 1;
    char escolhaOp;
    int escolhaLinha;
    float soma, media;


    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            m[i][j] = count;
            count++;
        }
    }

    for(i = 0; i <12; i++){
        printf("\t\n");
        for(j = 0; j < 12; j++){
            printf("%d ", m[i][j]);
        }
    }

    printf("\nDigite qual linha tu que mexer 0-11: ");
    fflush(stdin);
    scanf("%d", &escolhaLinha);

    // if se for maior
    //printf("%d", escolhaLinha);

    printf("Digite a operacao de escolha (M)edia (S)oma: ");
    fflush(stdin);
    scanf("%c", &escolhaOp);

    switch (escolhaOp)
    {
    case 'S':
        soma = 0;
        for(i = 0; i < 12; i++){
            soma += m[escolhaLinha][i]; 
        }     
        
        printf("Soma %.2f", soma);
        break;


    case 'M':
        soma = 0;
        
        for(i = 0; i < 12; i++){
            soma += m[escolhaLinha][i]; 
        }     
        
        media = (soma / 12);
        printf("Media %.2f", media);
        break;


    default:
        break;
    }


    return 0;
}