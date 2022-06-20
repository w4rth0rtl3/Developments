/*
Criei um programa em C, que use uma macro para retornar o valor da média aritmética de três valores
numéricos informados pelo usuário.
*/

#include <stdio.h>
#define MEDIA(a,b,c) printf("%.2f", ((a + b + c) / 3))

int main(){

	float a,  b, c;
	
	puts("Digite um numero");
	scanf("%f", &a);
	
	puts("Digite um numero");
	scanf("%f", &b);

	puts("Digite um numero");
	scanf("%f", &c);



	printf("\nA media dos numeros %.2f, %.2f, %.2f eh %.2f", a, b, c, MEDIA(a, b, c));	

        return 0;
}
