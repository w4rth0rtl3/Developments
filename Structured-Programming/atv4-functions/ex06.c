/*
Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule 
e retorne o IMC (Índice de Massa Corporal) dessa pessoa

imc = peso / altura * altura

*/

#include <stdio.h>

float imc(float peso, float altura);
int main(){


    float peso;
    float altura;

    printf("Digite o peso (ex 60.34): ");
    scanf("%f", &peso);

    
    printf("Digite a altura (ex 1.76): ");
    scanf("%f", &altura);


    printf("Seu imc eh %.2f\n", imc(peso, altura));

    return 0;
}

float imc(float peso, float altura){

    return peso / (altura * altura);
}