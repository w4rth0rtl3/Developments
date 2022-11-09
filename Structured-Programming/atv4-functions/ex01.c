//Escreva uma função que receba por parâmetro dois números e retorne o maior deles

#include <stdio.h>

int maior(int a, int b);

int main(){

    int a = 10;
    int b = 100;
    int variavel = maior(a, b);
    
    printf("O maior valor entre %d e %d eh: %d\n",a, b, variavel);
    printf("O maior valor entre %d e %d eh: %d\n",a, b, maior(a, b));
    return 0;
}

int maior(int a, int b){

    if(a > b){
        return a;
    }
    else if (b > a){
        return b;
    }
}