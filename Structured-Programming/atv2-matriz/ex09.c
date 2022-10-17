/*
Faça  um  programa  em  C  que  leia  uma  matriz  10  x  3  com  as  notas  de  10 
alunos  em  3  disciplinas.  Em  seguida,  calcule  e  escreva  o  número  de  alunos 
cuja  pior  nota  foi  na  disciplina  1,  o  número  de  alunos  cuja  pior  nota  foi  na 
disciplina 2, e o número de alunos cuja a pior nota foi na disciplina 3. Em caso 
de empate das piores notas de um aluno, o critério de desempate é arbitrário, 
mas o aluno deve ser contabilizado apenas uma vez. 
*/

#include<stdio.h>

int main(){

    int notas[5][3];
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            printf("Digite a %d nota do %d aluno: ", j, i);
            fflush(stdin);
            scanf("%d", &notas[i][j]);
        }
    }

    int menor, menor1, menor2, menor3 = 0;
    menor1 = 0;
   printf("Quantidade de menores notas nas máterias:\n1: %d\n2: %d\n3: %d\n\n\n\n", menor1, menor2, menor3);

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            if(j == 0){
                menor = notas[i][j];
            }
            if(notas[i][j] < menor){
                menor = notas[i][j];

                
                if(j == 0){
                    menor1++;
                }
                if(j == 1){
                    menor2++;
                }else{
                    menor3++;
                }

            }
        }
    }

    printf("Quantidade de menores notas nas máterias:\n1: %d\n2: %d\n3: %d\n", menor1, menor2, menor3);

    return 0;
}