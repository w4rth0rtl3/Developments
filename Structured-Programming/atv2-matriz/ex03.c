/*
Faça um programa em C para ler 10 números DIFERENTES a serem 
armazenados  em  um  vetor.  Os  dados  deverão  ser  armazenados  no  vetor  na 
ordem que forem sendo lidos, sendo que caso o usuário digite um número que 
já  foi  digitado  anteriormente,  o  programa  deverá  pedir  para  ele  digitar  outro 
número.  Note  que  cada  valor  digitado  pelo  usuário  deve  ser  pesquisado  no 
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir 
na tela o vetor final que foi digitado
*/

#include <stdio.h>

int main(){

    int numeros[10];
    int i, k;
    int num;
    
    for(i = 0; i < 5; i++){
        printf("Digite um numero: ");
        fflush(stdin);
        scanf("%d", &numeros[i]);

        num = numeros[i];
        printf("num %d\n", num);

        // 1 2 3 1 5
        // 1 2 3 1 5

        for(k = 0; k < 5; k++){
            if(i != k && num == numeros[k]){
                printf("O numero %d repetiu\n", num);
                printf("Digite um novo numero: ");
                fflush(stdin);
                scanf("%d", &numeros[k]);
            
            }
            else{
                numeros[i] = num;
            }
        }    
    }

    for(i = 0; i < 5; i++){
        printf("%d ", numeros[i]);
    }

    return 0;
}