package banksystem;

public class TestaMetodo {

	public static void main(String[] args) {
		Conta contaDoFulano = new Conta();
		
		contaDoFulano.saldo = 100;
		double valor = 50;
		
		contaDoFulano.deposita(valor);
//		System.out.println("Adicionando + " + valor);
//		System.out.println("Total: " + contaDoFulano.saldo);
		

//		boolean conseguiRetirar = contaDoFulano.saca(1020);
//		System.out.println(conseguiRetirar);
		
		Conta contaDaMarcela = new Conta();
		System.out.println(contaDaMarcela.saldo);
		contaDaMarcela.deposita(10000);
		contaDaMarcela.transfere(1500, contaDoFulano);
		System.out.println(contaDaMarcela.saldo + " " + contaDoFulano.saldo);
		
		contaDoFulano.titular  = "Fulano da Silva";
		System.out.println(contaDoFulano.titular);
		

	}

}
