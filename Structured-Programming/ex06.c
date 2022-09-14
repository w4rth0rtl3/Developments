/*
Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa 
(máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os 
dados lidos e o maior e menor salário dos funcionários. O maior e menor salário deverão ser 
obtidos, cada um, por uma função. Sabe-se ainda que não existe matrícula repetida na empresa.
*/

#include <stdio.h>

int main(){

    long int matricula, m_menor, m_maior;
    float salario, s_menor, s_maior;
    int i;

    for(i = 0; i <= 2; i++){
        printf("Digite a matricula do funcionario: "); 
        fflush(stdin); 
        scanf("%d", &matricula);
        
        printf("Digite o salario da matricula %d: ", matricula); 
        fflush(stdin); 
        scanf("%f", &salario);
        
        
        if(i == 0){
            m_menor, m_maior = matricula;
            s_menor, s_menor = salario;

            printf("\nAAAAAAAAAAAAAAAAAAAAAAAAAAAAAa%.2f\n", salario);
        }
        if (salario > s_maior){
            s_maior = salario;
            m_maior = matricula;

        }
        if (salario < s_menor){
            s_menor = salario;
            m_menor = matricula;
        }
        

    }

    printf("O maior salario eh %.2f na matricula %d\n", s_maior, m_maior);
    printf("O menor salario eh %.2f na matricula %d\n", s_menor, s_menor);
    
    return 0;
}

