//É uma tipo de variavel que armazena variavies diferentes

#include <stdio.h>

int main(){

    struct cliente {

        int code;
        char nome[50];
        char nascimento[8];

    };

    struct cliente usuario;
    

    printf("Digite code do cliente: ");
    scanf("%d", &usuario.code);

    printf("Digite o nome do cliente: ");
    fflush(stdin);
    fgets(usuario.nome, 50, stdin);

    printf("Nome: %s", usuario.nome);

    printf("Code: %d", usuario.code);

    return 0;
}