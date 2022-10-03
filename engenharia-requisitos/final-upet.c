#include <stdio.h>
#include <stdlib.h>

void cadastroCliente();
void cadastroAnimal();
void cadastroProdutos();
void vendaProdutos();
void servicos();

int main(){	
    // Pega a acao do operador=
    int acao;   
    printf("O que deseja fazer?\n\t1 - Cadastrar cliente(s) e animal(is)\n\t2 - Acessar servicos\n\t3 - Comprar produtos\n\t4 - Cadastrar produtos\n> ");
    fflush(stdin);
    scanf("%d", &acao);

    while (acao < 1 || acao > 4){
        printf("Erro, digite uma opcao valida: ");
        scanf ("%d", &acao);
    }

    switch (acao)
    {
    case 1:
        
        cadastroCliente();
        cadastroAnimal();
        printf("\nProcesso finalizado\n");
		break;
    
    case 2:
        servicos();
        printf("\nProcesso finalizado\n");
        break;
    
    case 3:
        vendaProdutos();
        printf("\nProcesso finalizado\n");
        break;
    
    case 4:
        cadastroProdutos();
        printf("\nProcesso finalizado\n");
        break;
		  
    default:
        break;
    }
    return 0;
}

void cadastroCliente(){
	// Nome
	char nome_cliente[50];
	printf("\n1 - Cadastrar cliente(s) e animal(is)");
	printf("\nDigite o nome do cliente: ");
	fflush(stdin);
	fgets(nome_cliente, 50, stdin);
	
	//cpf
	char cpf_cliente[12];
	printf("Digite o CPF do cliente: ");
	fflush(stdin);
	fgets(cpf_cliente, 12, stdin);
	
	// Email
	char email_cliente[50];
	printf("Digite o e-mail do cliente: ");
	fflush(stdin);
	fgets(email_cliente, 50, stdin);
	
	// telefone
	char telefone_cliente[50];
	printf("Digite o telefone do cliente: ");
	fflush(stdin);
	fgets(telefone_cliente, 50, stdin);
	
	// endereco
	char endereco_cliente[100];
	printf("Digite o endereco do cliente: ");
	fflush(stdin);
	fgets(endereco_cliente, 100, stdin);
	
	// senha
	char senha_cliente[50];
	printf("Criar uma senha: ");
	fflush(stdin);
	fgets(senha_cliente, 50, stdin);
		
	printf("\n\n");
	printf("\t\tInfomacoes salvas: \n - Nome: %s", nome_cliente);
	printf(" - CPF: %s", cpf_cliente);
	printf(" - Email: %s", email_cliente);
	printf(" - Telefone: %s", telefone_cliente);
	printf(" - Endereco: %s", endereco_cliente);	
    printf("\t-----Dados salvos no bancos de dados!-----\n");
}

void cadastroAnimal(){
	printf("\n-> Agora, realizar o cadastro do animal ");
	
	// Nome
	char responsavel[50];
	printf("\nDigite o nome do responsavel: ");
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
	
	// raca do animal
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
	printf("Digite o sexo do animal (M ou F): ");
	fflush(stdin);
	scanf("%c", &sexo_animal);
	
	printf("\n\n");
	printf("\t\tInfomacoes salvas: \n - Responsavel: %s", responsavel);
	printf(" - Nome: %s", nome_animal);
	printf(" - Especie: %s", especie_animal);
	printf(" - Raca: %s", raca_animal);
	printf(" - Idade: %d\n", idade_animal);
	printf(" - Sexo: %c", sexo_animal);

    printf("\n\t-----Animal salvo no banco de dados!-----\n");
}

void cadastroProdutos(){
	
	char senha_func;
	printf ("\n4 - Cadastrar produtos");
	printf("\nEsta opcao e destinada apenas a funcionarios, digite seu codigo para continuar");
	printf("\nCodigo de funcionario: ");
	scanf("%s", &senha_func);
	
	printf("\n\tAcesso autorizado!");
	printf("\nIniciando cadastro de produtos...");
	
	// Tipo
	char tipo_produto[50];
	printf("\n\nDigite o tipo do produto: ");
	fflush(stdin);
	fgets(tipo_produto, 50, stdin);
	
	// Nome
	char nome_produto[50];
	printf("Digite o nome do produto: ");
	fflush(stdin);
	fgets(nome_produto, 50, stdin);

    //validade_produto
    char validade_produto[10];
	printf("Digite a validade do produto (0 se nao houver): ");
	fflush(stdin);
	fgets(validade_produto, 10, stdin);
    fflush(stdin);
	
	// quantidade_produto
	int quantidade_produto;
	printf("Digite a quantidade do produto: ");
	fflush(stdin);
	scanf("%d", &quantidade_produto);
	
	printf("\n\n");
	printf("-----DADOS DO PRODUTO CADASTRADOS----- \n\n\ttipo_produto: %s\n", tipo_produto);
	printf("\tnome_produto: %s\n", nome_produto);
    printf("\tvalidade_produto: %s\n", validade_produto);
	printf("\tquantidade_produto: %d\n", quantidade_produto);

}

void vendaProdutos(){
	
	float acao;
	float total = 0;
	char email_cliente[50];
	char senha_cliente[50];
	int num_cartao;
	char email[50];
	char nome[50];
	
	//login
	printf ("\n3 - Comprar produtos");
	printf("\nPara continuar, faca login");
	printf("\nE-mail: ");
	scanf("%s", &email_cliente);
    printf("Senha: ");
	scanf("%s", &senha_cliente);
	
	printf("\n\tLogin concluido, seja bem-vindo!\n");
    
	float soma = 0;
	
	printf("\nSelecione o produto que deseja comprar:");

	printf("\n\n\t1- Racao\t\tR$35,50\n\t2- Brinquedos\t\tR$19,99\n\t3- Produtos de Higiene\tR$69,90\n\t4- Roupas e acessorios\tR$120,00\n> ");
	scanf("%f", &acao);
	

	while (acao > 0){
	
		if(acao==1){
		acao = 35.50;
	}
		if(acao==2){
		acao = 19.99;
	}
		if(acao==3){
		acao = 69.90;
	}
		if(acao==4){
		acao = 120.00;
	}	

	soma += acao;
		printf("\nTotal: R$%.2f", soma);
		printf("\nDigite novamente para adicionar mais itens ao carrinnho ou 0 para prosseguir: ");
		scanf("%f", &acao);
	}
	printf("\nTOTAL FINAL: R$%.2f", soma);
	
	//formas de pagamento
	int pagamento;
	printf("\nSelecione a forma de pagamento:");
	printf("\n\t1 - Credito\n\t2 - Debito\n\t3 - PIX\n\t4 - Boleto\n> ");
	fflush(stdin);
	scanf("%d", &pagamento);
	
	
	while(pagamento < 1 || pagamento > 4){
        printf("\nErro, digite uma opcao valida: ");
        scanf ("%d", &pagamento);
}
	switch(pagamento)
	{
		case 1:
			printf("\nDigite o numero do seu cartao: ");
			scanf("%d", &num_cartao);
			
			int val_cartao;
			printf("Digite a data de validade do seu cartao: ");
			scanf("%d", &val_cartao);
			
			int cvv_cartao;
			printf("Digite o codigo de seguranca do seu cartao: ");
			scanf("%d", &cvv_cartao);
			
			char confirmacao;
			printf("\nNovo cartao adicionado! Deseja confirmar a compra? (digite 's' para confirmar e 'n' para negar)\n> ");
			scanf("%s", &confirmacao);
			
			if(confirmacao == 's'){
				printf("\nCompra finalizada com sucesso, obrigado pela sua preferencia!\n");
			}
			else{
				printf("\nOcorreu um erro, tente novamente.");
			}
		    if(confirmacao == 'n'){
		    	printf("\nCompra cancelada!\n");
			}
			break;
					
		case 2:
			printf("\nDigite o numero do seu cartao: ");
			scanf("%d", &num_cartao);
			
			printf("Digite a data de validade do seu cartao: ");
			scanf("%d", &val_cartao);
			
			printf("Digite o codigo de seguranca do seu cartao: ");
			scanf("%d", &cvv_cartao);
			printf("\nNovo cartao adicionado! Deseja confirmar a compra? (digite 's' para confirmar e 'n' para negar)\n>");
			scanf("%s", &confirmacao);
			
			if(confirmacao == 's'){
				printf("\nCompra finalizada com sucesso, obrigado pela sua preferencia!\n");
			}
			else{
				printf("\nOcorreu um erro, tente novamente\n");
			}
		    if(confirmacao == 'n'){
		    	printf("\nCompra cancelada!");
			}
			break;
			
		case 3:
			
			printf("\nDigite o e-mail para que seu c�digo seja gerado: ");
			fflush(stdin);
			fgets(email, 50, stdin);	
			printf("Um QR-code foi enviado para o seu e-mail, obrigado pela sua preferencia!\n");
			break;
		
		case 4:
			printf("\nDigite o seu nome completo: ");
			fflush(stdin);
			fgets(nome, 50, stdin);
			
			char cpf[50];
			printf("Digite o seu CPF: ");
			fflush(stdin);
			fgets(cpf, 50, stdin);
			
			printf("Digite o e-mail para que seu boleto seja gerado: ");
			fflush(stdin);
			fgets(email, 50, stdin);
			
			printf("Um boleto foi gerado e enviado diretamente para o seu e-mail, obrigado pela preferencia!\n");
			break;
	}

}

void servicos(){
	
	char email_cliente[50];
	char senha_cliente[50];
	
	//login
	printf("\n2 - Acessar servicos");
	printf("\nPara continuar, digite seu e-mail e senha.");
	printf("\n\nE-mail: ");
	scanf("%s", &email_cliente);
    printf("Senha: ");
	scanf("%s", &senha_cliente);
	
	printf("\n\tLogin concluido, seja bem-vindo!\n");
	
	//Selecao de servicos
	char service[50];
	printf("\nDigite qual o servico abaixo desejado: \n\n\t1 - Banho e Tosa\n\t2 - Vacinacao\n\t3 - Atendimento veterinario\n");
    fflush(stdin);
    printf("\nServico: ");
	fflush(stdin);
	scanf("%s", &service);
   
   //agendando horario
    printf("\n\tServico selecionado! \nAgora, selecione o dia e horario disponivel que voce deseja ser atendido(a).\n");
	int selecao;
	printf("\n\t1 - Terca-feira das 15hrs as 18hrs \n\t2 - Quarta-feira das 9hrs a 12hrs \n\t3 - Sexta-feira das 14hrs as 19hrs\n> ");
    fflush(stdin);
    scanf("%d", &selecao);

    while(selecao < 1 || selecao > 3){
        printf("Erro, digite uma opcao valida: ");
        scanf ("%d", &selecao);
    }
    
    switch(selecao)
    {
    	case 1:
    		printf("\n\tAgendamento concluido!\n");
    		printf("\n - Tipo de servico: %s", service);
    		printf("\n - Dia: Terca-feira");
    		printf("\n - Horario: entre 15hrs e 18hrs");
    		printf("\n - Profissional: Thiago Santos de Oliveira\n\n");
    		break;
    	
    	case 2:
    		printf("\n\tAgendamento concluido!\n");
    		printf("\n - Tipo de servico: %s", service);
    		printf("\n - Dia: Quarta-feira");
    		printf("\n - Horario: entre 9hrs e 12hrs");
    		printf("\n - Profissional: Dra. Andreia de Alencar Cunha\n\n");
    		break;
    		
    	case 3:
			printf("\n\tAgendamento concluido!\n");
    		printf("\n - Tipo de servico: %s", service);
    		printf("\n - Dia: Sexta-feira");
    		printf("\n - Horario: entre 14hrs e 19hrs");
    		printf("\n - Profissional: Vanessa Costa de Moraes Silva\n\n");
    		break;    	  	
	}
}
