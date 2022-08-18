/*

Uma pesquisa sobre algumas caracterC-sticas fC-sicas da populaC'C#o de uma determinada regiC#o coletou os seguintes dados, referentes a cada habitante:
a) sexo (masculino, feminino);
b) cor dos olhos (azuis, verdes, castanhos, pretos);
c) cor dos cabelos (loiros, castanhos, pretos);
d) idade em anos.


Para indicar fim dos habitantes pesquisados, o usuC!rio fornecerC! um habitante fictC-cio com idade igual a b

*/

#include <stdio.h>

int main (){
  int totpessoas = 0;
  char sexo, olhos, cabelo;
  int idade, maior_idade;
  int pesquisadas = 0;

  while (totpessoas != -1)
    {

      printf ("idade: "); fflush (stdin); scanf ("%d", &idade);
    
      
      
       if (idade == -1){
	  break;
       }
	
	
       printf("\nQual o sexo: (M)asculino (F)eminino:  "); fflush (stdin); scanf (" %c", &sexo);

       printf("\nQual a cor dos olhos: (A)zul (V)erde (C)astanho (P)reto : "); fflush(stdin); scanf (" %c", &olhos);

       printf("\nQual a cor do cabelo: (L)oiros (C)astanho (C)astanho (P)reto: "); fflush(stdin); scanf (" %c", &cabelo);

       if(totpessoas == 0){
           maior_idade = idade;
       }
    
       if (idade > maior_idade){
          maior_idade = idade;
       }
    
       if((idade >= 18 && idade <= 35) &&(sexo == 'F' || sexo == 'f') && (olhos == 'V' || olhos == 'v') && (cabelo == 'L' || cabelo == 'l')){
           pesquisadas += 1;
       }


        
       totpessoas += 1;

    }
    

  
  printf("\n\nMaior idade: %d\n", maior_idade);  
  printf("porcentagem de pesquisadas: %d porcento \n", ((pesquisadas * 100) / totpessoas));
 

  return 0;
}
