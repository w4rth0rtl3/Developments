/*
 Criei um programa em C, que faça a contagem progressiva e regressiva no mesmo laço de FOR de números
 no intervalo de 10 a 20
 */

#include <stdio.h>

int main(){
  
  int a, b;  
  
  // conta de 10 a 20
  for(a = 10; a <= 20; a++){
    printf("%d\n", a);

    // verifica se chegou em 20
    if(a == 20){
	
      // pula uma linha 
      printf("\n");

      // usa a var b para fazer uma contagem de 20 a 10
      for(b = 20; b >= 10; b--){
        printf("%d\n", b);  
        
        }
    }
  }}

