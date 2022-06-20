/*
Leia o nome completo de 2 pessoas e apresente o primeiro nome somente em letras maiúsculas e na linha
seguinte, com uma tabulação, o segundo nome em letras minúsculas, solicitando outros nomes caso o usuário deseje
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
//char nome1[30], nome2[30], r1[30], r2[30];
int resp = 1;	

while (resp != 0){ 	
char nome1[30], nome2[30], r1[30], r2[30];

   fflush(stdin);
   puts("Digite um nome completo\n");
   gets(nome1);

   fflush(stdin);
   puts("Digite outro nome completo\n");
   gets(nome2);

	for(int i = 0; nome1[i]; i++){
		char a;
		a = nome1[i];
		r1[i] = toupper(a);			
	}

		for(int i = 0; nome2[i]; i++){
		char b;
		b = nome2[i];
		r2[i] = tolower(b);			
	}

   printf("%s\n", r1);
   printf("\t%s\n", r2);

   
   puts("Deseja digitar novos nomes 1 - sim 0 não\n");
   fflush(stdin);
   scanf("%d", &resp);
   fflush(stdin);

}  

   return 0;
}
