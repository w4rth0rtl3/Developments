/*
Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a 
sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: 
Entrada = 4. Saída = abril.
*/

#include <stdio.h>

int imprime_mes(int numero); 

int main(){

    int numero = imprime_mes(1);
    return 0;
}

int imprime_mes(int numero){

    switch (numero)
    {
    case 1:
        printf("Numero %d eh o mes de Janeiro\n", numero);
        break;
    
    case 2:
        printf("Numero %d eh o mes de Fevereiro\n", numero);
        break;

    case 3:
        printf("Numero %d eh o mes de Marco\n", numero);
        break;
    
    case 4:
        printf("Numero %d eh o mes de Abril\n", numero);
        break;
    
    case 5:
        printf("Numero %d eh o mes de Maio\n", numero);
        break;
    
    
    case 6:
        printf("Numero %d eh o mes de Junho\n", numero);
        break;
    
    case 7:
        printf("Numero %d eh o mes de Julho\n", numero);
        break;

    case 8:
        printf("Numero %d eh o mes de Agosto\n", numero);
        break;
    
    case 9:
        printf("Numero %d eh o mes de Setembro\n", numero);
        break;
    
    case 10:
        printf("Numero %d eh o mes de Outubro\n", numero);
        break;
    
    case 11:
        printf("Numero %d eh o mes de Novembro\n", numero);
        break;
    
     case 12:
        printf("Numero %d eh o mes de Dezembro\n", numero);
        break;

    default:
        printf("Entrada invalida\n", numero);
        break;
    }
}
