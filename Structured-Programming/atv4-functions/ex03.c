/*
Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a 
retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0), 
sendo F a temperatura em Fahrenheit e C a temperatura em Celsius
*/

#include <stdio.h>

float converteCelsius(float fahrenheit);

int main(){

    printf("60 fahrenheit eh %2.f celsius", converteCelsius(60.0));
    return 0;
}


float converteCelsius(float fahrenheit){
    return ((fahrenheit - 32.0) * (5.0 / 9.0));
}
