/*
Escreva uma função para o cálculo do volume de uma esfera

v = 4 / 3 * pi * r³
*/

#include <stdio.h>

float volumeCilindro(float altura, float raio);

int main(){

    printf("O volume de uma esfera de %f eh:  %f",60.0, volumeCilindro(60.0, 30.0));
    return 0;
}



float volumeCilindro(float altura, float raio){
    return (3.14 * (raio * raio)  * altura);
}
