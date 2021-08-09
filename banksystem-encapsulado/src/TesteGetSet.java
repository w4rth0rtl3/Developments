
public class TesteGetSet {

	public static void main(String[] args) {
		Conta conta = new Conta();
		
		conta.setNumero(10);
		conta.setAgencia(1337);
		System.out.println(conta.getNumero() + " " + conta.getAgencia());
		
		Client fulano = new Client();
		//conta.titular = fulano;
		conta.setTitular(fulano);
//		fulano.nome = "Fulano da Silva";
		fulano.setNome("Fulano da Silva");
		System.out.println(conta.getTitular().getNome());
		
		conta.getTitular().setProfissao("Batateiro");
		System.out.println(fulano.getProfissao() == conta.getTitular().getProfissao());
	}
}
