/*
Elabore um algoritmo em C, o qual o usuário entre com o número e o programa verifique se o número é
impar ou par.
*/

#include <stdio.h>

int main(){

	int num;

	puts("Digite um numero:");
	scanf("%d", &num);
    	
	printf("\n\n");
	if(num % 2 == 0){
		printf("o num %d eh par\n", num);
	}
	else {
		printf("o num %d eh impar\n", num);
	
	}

	return 0;
}
