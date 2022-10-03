/*
Escreva  um  programa  em  C  que  lê  matricula  e  as  notas  de  no  máximo  100 
alunos. O programa deve ler e armazenar uma nova matricula e uma nova nota 
enquanto o usuário desejar. Após o armazenamento permita ao usuário 
consultar a nota de um aluno digitando sua matricula, o programa deve permitir 
no máximo 10 consultas para um mesmo ciclo de execução do programa
*/

//BASE DO CÓDIGO
/*

#include <stdio.h>

int main(){

    int alunos[2][2];
    int i, j, k, matricula, nota, dado, count;
    char resp;



    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
                
            if(j == 0){
                printf("Digite a matricula: ");
                fflush(stdin);
                scanf("%d", &matricula);

                alunos[i][j] = matricula;
            }
            else{
                    
                printf("\tDigite a nota: ");
                fflush(stdin);
                scanf("%d", &nota);
                alunos[i][j] = nota;
            }

        }
                    

    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            
            if(j == 0){
                printf("Matricula: %d", alunos[i][j]);  
            }
            else{   
               printf("\n\tnota: %d\n", alunos[i][j]);  
            }

            }        
    }

    return 0;
}

*/

//// Falta fazer repetir 100 ou de acordo com a necessidade do usuário, colocar isso em uma função ajeitaria minha vida


#include <stdio.h>

int main(){

    int alunos[100][2]; //uma matriz de até 100 index contendo 2 valores, matricula e nota
    int i, j, k, matricula, nota, consulta;
    char resp;

    int tot_alunos;

    printf("Quantos alunos deseja cadastrar ?: "); // A principio pensei em fazer o loop usando um while porém se eu perguntar antes a quantidade de alunos eu posso fazer tudo calculado
    fflush(stdin);
    scanf("%d", &tot_alunos);

    for(i = 0; i < tot_alunos; i++){ /*todo for será baseado no tot_alunos inserido anteriormente ao inves de varrer toda a matriz*/
        for(j = 0; j < 2; j++){
            
            //Na matriz temos o que no index 0 sempre vai ser a matriculo e na index 1 sempre será a nota daquela matricula / aluno
            // então para separar os dados eu usei um if, se for lugar de matricula insere matricula se for lugar de nota insere nota
            if(j == 0){
                printf("Digite a matricula: ");
                fflush(stdin);
                scanf("%d", &matricula);

                alunos[i][j] = matricula;
            }
            else{
                    
                printf("\tDigite a nota: ");
                fflush(stdin);
                scanf("%d", &nota);
                alunos[i][j] = nota;
            }

        }
                    

    }

    printf("\n\n\n");

    // A partir daqui temos a matriz preenchida com até 100 alunos
    //Devemos fazer consulta de até 10 alunos, sim nossa matriz tem 100 mas só podemos mostrar 10 notas

    for(i = 0; i < 10; i++){ /*pecorre até 10 vezes*/
        printf("Deseja consultar a nota de um aluno (S ou N)");
        fflush(stdin);
        scanf("%c", &resp); // vê se o usário quer consultar uma ntoa

        printf("\n");

        //Caso queira consultar
        if(resp == 'S' || resp == 's'){
            printf("Digite a matricula do aluno: ");
            fflush(stdin);
            scanf("%d", &consulta); // pega a matricula que deseja consultar 

           
          // printf("\n\n\t%d\n\n", alunos[i][0]);
           //printf("\n\n\t%d\n\n", consulta);


            //pecorre todo a matriz de acordo com a quantidade de alunos cadastrados
            for(j = 0; j < tot_alunos; j ++){
                
                //pecorre os valores matricula e nota
                for (k = 0; k < 2; k++){
                    // se a matricula for igual a consultada
                    if(alunos[j][k] == consulta){
                        printf("A nota do aluno %d eh: %d\n", consulta, alunos[j][k + 1]); // mostra a nota
                    }
                    
                }
                
           }

        }

        // caso não queira consultar, a principo se o usuário digitar qualquer coisa  que não seja s ou S ele acaba o programa
        else{
            break;
        }        
    }

    printf("Obrigado por utilizar o sistemas de notas");
    return 0;
}