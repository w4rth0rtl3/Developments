/*
Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e 
retorne o volume desse cilindro. O volume de um cilindro circular é calculado por meio da 
seguinte fórmula: V = PI * raio ** 2  * altura
*/

#include <stdio.h>

float volumeCilindro(float altura, float raio);

int main(){

    printf("O volume do cilindro circular com %f de raio e %f de altura\neh: %f",60.0, 30.0, volumeCilindro(60.0, 30.0));
    return 0;
}



float volumeCilindro(float altura, float raio){
    return (3.14 * (raio * raio)  * altura);
}
