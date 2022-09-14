//Arrays

// É um tipo de dados que irá alocar varios espaços de memórias para armazenar varios valores do mesmo tipo
// Exemplo um programa que leia varias notas de varios alunos 9 8 7 6 10 2 3
// ao inves de termos nota1, nota2, nota3, nota1000 ... 
// teremos um nota[1000] = 9, 8, 7, 6, 10, 2, 3 ...
//O vetor trabalha com indices 
//nota[0], nota[1] ....
//nota[0] == 9


// ao trabalhar com vetores os laços de repetiçõees são nossos amigos 
#include <stdio.h>

int main(){

    float totnotas[2];
    float nota[3], nota2[3];
    int i;


    // Aluno1
    //// nota1, nota2, nota3


    for(i = 0; i < 3; i++){
        printf("Digite a %d nota: ", i); 
        fflush(stdin); 
        scanf("%f", &nota[i]);
    }

    printf("\nnota 2\n");

    for(i = 0; i < 3; i++){
        printf("Digite a %d nota: ", i); 
        fflush(stdin); 
        scanf("%f", &nota2[i]);
    }

    for(i = 0; i < 3; i++){
        printf("nota1 %2.f\n", nota1[i]);
        printf("nota2 %2.f\n", nota2[i]);
        
        //printf("nota2 %2.f\n", nota2[i]);
    }

    return 0;

}

