
public class TestaValores {

	public static void main(String[] args) {

		int total = 0;
		Conta conta = new Conta(1337, 1000);
		total++;
		// 
		//conta.setAgencia(-1337);
		//conta.setNumero(-100);
		System.out.println(conta.getAgencia());
	
		Conta conta2 = new Conta(1334, 2000);
		
		System.out.println(Conta.getTotal());
	}
	
}
