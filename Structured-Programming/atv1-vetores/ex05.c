/*
Faça um algoritmo que leia um vetor de até 80 elementos. Após a leitura de todos os dados, leia 
um  número e  verifique  se  existem  elementos  no  vetor  iguais  ao número  lido.  Se  existirem, 
escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posições em que eles estão 
armazenados no vetor
*/

//Isso seria um fgets e um for dentro de outro um para pecorrer o array e outror para pecorrer de novo comparando com o elemento atual

#include <stdio.h>

int main(){

    int elementos[5];
    int count, num = 0;
    int i, j;

    printf("Digite um numero negativo para sair do programa");
    for(count = 0; count <= 5; count++){
        
        printf("\nDigite um numero: "); fflush(stdin); scanf("%d", &elementos[count]);
       /* if(num < 0){
            break;
        }
        else{
            elementos[count] = num;
        }*/
    }


       for(i = 0; i <= 5; i++){
            //printf("%d, ", elementos[i]);
          printf("\n\n");
            
          for(j = 0; j <= 5; j++){
                //printf("%d ", elementos[j]);
                if(elementos[i] == elementos[j] && j != i){
                    printf("\nO %d repetiu na posicao %d", elementos[i], j);
                }
                
             }
        
        }


/*    int i, j;

    printf("Digite uma palavra de ate 80 nummeros separados por espaço: ");
    fflush(stdin);
    fgets(elementos, 80, stdin);


    printf("%d", elementos[3]);
 */
    return 0;
}