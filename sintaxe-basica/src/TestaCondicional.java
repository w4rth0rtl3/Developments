public class TestaCondicional {


	public static void main (String[] args){
		System.out.println("Testando condicionais");
		int idade = 10;
		int quantidadePessoas = 3;
		if(idade >= 18) {
			System.out.println("Pode entrar");
		
		} else {
			if(quantidadePessoas >= 2) {
				System.out.println("Voce é de menor mas pode entrar pois está acompanhado");
			} else {
			System.out.println("Não pode entrar");
			}
		}
		
		System.out.println(idade);
		
		
	}
			
}
