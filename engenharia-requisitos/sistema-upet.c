//cadastro_cliente
//cadastro_produto
//cadastro_animal

#include <stdio.h>
#include <locale.h>

void cadastroCliente();
void cadastroAnimal();
void cadastroProdutos();
void vendaProdutos();
void servicos();

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    // Pega a açao do operador
    int acao;   
    printf("O que deseja fazer ?\n\t1 - Cadastrar cliente e animal\n\t2 - Servicos\n\t3 - Venda de produtos\n\t4 - Cadastro de produtos\n>");
    fflush(stdin);
    scanf("%d", &acao);

    if(acao < 1 || acao > 4){
        printf("Selecione um opcao valida");
        return 0;
    }

    switch (acao)
    {
    case 1:
        cadastroCliente();
        cadastroAnimal();
        break;
    
    case 2:
        servicos();
        break;
    
    case 3:
        vendaProdutos();
        break;
    
    case 4:
        cadastroProdutos();
        break;
    
    default:
        break;
    }
    return 0;
}

void cadastroCliente(){
	// Nome
	char nome_cliente[50];
	printf("\nDigite o seu nome: ");
	fflush(stdin);
	fgets(nome_cliente, 50, stdin);
	
	//cpf
	char cpf_cliente[12];
	printf("Digite o ceu cpf : ");
	fflush(stdin);
	fgets(cpf_cliente, 12, stdin);
	
	// Email
	char email_cliente[50];
	printf("Digite o seu email: ");
	fflush(stdin);
	fgets(email_cliente, 50, stdin);
	
	// telefone
	char telefone_cliente[50];
	printf("Digite o seu telefone: ");
	fflush(stdin);
	fgets(telefone_cliente, 50, stdin);
	
	// endereco
	char endereco_cliente[100];
	printf("Digite o seu endereco: ");
	fflush(stdin);
	fgets(endereco_cliente, 100, stdin);
	
	// senha
	char senha_cliente[50];
	printf("Crie uma senha: ");
	fflush(stdin);
	fgets(senha_cliente, 50, stdin);
		
	printf("\n\n");
	printf("Nome: %s", nome_cliente);
	printf("CPF: %s", cpf_cliente);
	printf("Email: %s", email_cliente);
	printf("Telefone: %s", telefone_cliente);
	printf("Endereco: %s", endereco_cliente);	
    printf("\n\t\tDados salvos com sucesso no bancos de dados\n");
}

void cadastroAnimal(){
	printf("Cadastro do animal ");
	
	// Nome
	char responsavel[50];
	printf("\n\nDigite o nome do responsavel: ");
	fflush(stdin);
	fgets(responsavel, 50, stdin);
	
	//nome do animal
	char nome_animal[12];
	printf("Digite o nome do animal: ");
	fflush(stdin);
	fgets(nome_animal, 12, stdin);
	
	// especie
	char especie_animal[50];
	printf("Digite a especie do animal: ");
	fflush(stdin);
	fgets(especie_animal, 50, stdin);
	
	// ra�a do animal
	char raca_animal[50];
	printf("Digite a raca do animal: ");
	fflush(stdin);
	fgets(raca_animal, 50, stdin);
	
	// idade do animal
	int idade_animal;
	printf("Digite a idade do animal: ");
	fflush(stdin);
	scanf("%d", &idade_animal);
	
	// Sexo
	char sexo_animal;
	printf("Qual o sexo do animal M ou F: ");
	fflush(stdin);
	scanf("%c", &sexo_animal);
	
	printf("\n\n");
	printf("Responsavel: %s", responsavel);
	printf("nome: %s", nome_animal);
	printf("especie: %s", especie_animal);
	printf("raca: %s", raca_animal);
	printf("idade: %d\n", idade_animal);
	printf("sexo: %c", sexo_animal);

    printf("\nAnimal salvo com sucesso no banco de dados\n");
}

void cadastroProdutos(){
	printf("Cadastro de produtos");
	
	// Tipo
	char tipo_produto[50];
	printf("Digite o tipo_produto do produto: ");
	fflush(stdin);
	fgets(tipo_produto, 50, stdin);
	
	// Nome
	char nome_produto[50];
	printf("Digite o nome_produto do produto: ");
	fflush(stdin);
	fgets(nome_produto, 50, stdin);

    //validade_produto
    char validade_produto[10];
	printf("validade do produto (0 se nao for necessario): ");
	fflush(stdin);
	fgets(validade_produto, 10, stdin);
    fflush(stdin);
	
	// quantidade_produto
	int quantidade_produto;
	printf("Digite a quantidade do produto: ");
	fflush(stdin);
	scanf("%d", &quantidade_produto);
	
	printf("\n\n");
	printf("tipo_produto: %s\n", tipo_produto);
	printf("nome_produto: %s\n", nome_produto);
    printf("validade_produto: %s\n", validade_produto);
	printf("quantidade_produto: %d\n", quantidade_produto);

}

void vendaProdutos(){
    char especie[50];
    printf("Para qual especie voce deseja comprar produtos?\n>");
    fflush(stdin);
    fgets(especie, 50, stdin);

    printf("\n\t1 - racao para %s\t2 - brinquedos de %s\t3 - Produtos de higiene para %s\t4 - Diversos\n", especie, especie, especie);
}

void servicos(){
	
	char email_cliente[50];
	char senha_cliente[50];
	
	//login
	printf("Para continuar digite seu e-mail e senha");
	
	printf("\n\nE-mail: ");
	scanf("%s", &email_cliente);
    printf("Senha: ");
	scanf("%s", &senha_cliente);
	
	printf("\nLogin concluido, Seja Bem vindo!\n");
	
	//Sele��o de servi�os
	char service[50];
	printf("\nDigite qual tipo de servico abaixo que voce deseja \n\n\t> Banho e Tosa\n\t> Vacinacao\n\t> Atendimento veterinario\n");
    fflush(stdin);
    printf("\nServico: ");
	fflush(stdin);
	scanf("%s", &service);
   
   //agendando horario
   printf("\nServico selecionado com sucesso! Agora, selecione o dia e horario que voce deseja ser atendido.\n");
   	int selecao;
	printf("\nHararios disponiveis: \n\n\t1 - Terca-feira das 15hrs as 18hrs \n\t2 - Quarta-feita das 9Hrs as 12hrs \n\t3 - Sexta-feira das 14hras as 19hrs\n\>");
    fflush(stdin);
    scanf("%d", &selecao);

    if(selecao < 1 || selecao > 3){
        printf("Tu e uma merda !");
    }
    
    switch(selecao)
    {
    	case 1:
    		printf("\nAgendamento concluido!\n\n");
    		printf("\nTipo de servico: %s", service);
    		printf("\nDia: Terca-feira");
    		printf("\nHorario: entre 15hrs e 18hrs");
    		printf("\nProfissional: Thiago Santos de Oliveira\n\n");
    		break;
    	
    	case 2:
    		printf("\nAgendamento concluido!\n\n");
    		printf("\nTipo de servico: %s", service);
    		printf("\nDia: Quarta-feira");
    		printf("\nHorcrio: entre 9hrs e 12hrs");
    		printf("\nProfissional: Dra. Andreia de Alencar Cunha\n\n");
    		break;
    		
    	case 3:
			printf("\nAgendamento concluido!\n\n");
    		printf("\nTipo de servico: %s", service);
    		printf("\nDia: Sexta-feira");
    		printf("\nHorario: entre 14hrs e 19hrs");
    		printf("\nProfissional: Vanessa Costa de Moraes Silva\n\n");
    		break;    	
    	
	}
}


