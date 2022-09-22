/*
Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após 
este cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento 
dos  preços  cadastrados,  sendo  a  primeira  de  10%  para  todos  os  CDs,  enquanto  a  segunda 
aumenta  o  percentual  informado  pelo  vendedor  para  todos  os  CDs.  Será  o  vendedor  que 
escolherá o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual de 
aumento e, para cada CD, o valor sem aumento e o valor com aumento
*/

#include <stdio.h>

int main(){

    float cd[5], cd10[5], cdx[5], valor;
    int porcentagemX, i;

    printf("Digite qual porcentagem o vendedor deseja: ");
    fflush(stdin);
    scanf("%d", &porcentagemX);

 //   printf("%d\n", porcentagemX);
        
    for(i = 0; i < 5; i++){
        printf("Digite o valor do %d cd: ", i);
        fflush(stdin);
        scanf("%f", &cd[i]);

        cd10[i] = cd[i] + ((cd[i] * 10) / 100);
        cdx[i] = cd[i] + ((cd[i] * porcentagemX) / 100);
    }

    printf("\to\t10\%\t%d\%\n", porcentagemX);

    for(i = 0; i < 5; i++){
        printf("\t%.2f\t%.2f\t%.2f\n", cd[i], cd10[i], cdx[i]);
    }

}