/*
Desenvolva um algoritmo que cadastre os preços de até 100 diferentes CDs em uma loja. Após 
este cadastro, o algoritmo deverá possibilitar a execução de uma de duas funções para aumento 
dos  preços  cadastrados,  sendo  a  primeira  de  10%  para  todos  os  CDs,  enquanto  a  segunda 
aumenta  o  percentual  informado  pelo  vendedor  para  todos  os  CDs.  Será  o  vendedor  que 
escolherá o tipo de aumento desejado. Após os cálculos deverá ser apresentado o percentual de 
aumento e, para cada CD, o valor sem aumento e o valor com aumento
*/

// cadastrar 5 valores de cd 


#include <stdio.h>

int main(){

    float cdo[5], cd10[5], cdx[5];
    int i, porcentagem;

    for(i = 0; i < 5; i++){
        printf("Digite o valor do %d cd: ", i);
        scanf("%f", &cdo[i]);
    }

    for(i = 0; i < 5; i++){
        float novo_valor = cdo[i] + ((cdo[i] * 10) / 100);
        cd10[i] = novo_valor;
    }

    //// 2 = 100
    //// x = 10

    printf("Qual a \% que o vendedor que colocar : ");
    scanf("%d", &porcentagem);
 
 
    for(i = 0; i < 5; i++){
        float novo_valor = cdo[i] + ((cdo[i] * porcentagem) / 100);
        cdx[i] = novo_valor;
    }
 
    
    printf("\to\t10\%\t%d\%\n", porcentagem);



    for(i = 0; i < 5; i++){
        printf("\t%.2f\t%.2f\t%.2f\n", cdo[i], cd10[i], cdx[i]);
    }

    return 0;
}