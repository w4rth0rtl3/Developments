
public class TestaBanco {

	public static void main(String[] args) {
		Client fulano = new Client();
		fulano.nome = "Fulano da Silva";
		fulano.cpf = "000.000.000-00";
		fulano.profissao = "batateiro";
	
		Conta contaDoFulano = new Conta();
		contaDoFulano.deposita(1000);
		contaDoFulano.titular = fulano;
		
		System.out.println(contaDoFulano.titular.nome + ": " + contaDoFulano.getSaldo()());
	}
	
}
