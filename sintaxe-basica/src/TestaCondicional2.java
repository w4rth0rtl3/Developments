
public class TestaCondicional2 {

	public static void main (String[] args){
		System.out.println("Testando condicionais");
		int idade = 10;
		int quantidadePessoas = 3;
		boolean acompanhado = quantidadePessoas >= 2;
		if(idade >= 18 && acompanhado) {
			System.out.println("Pode entrar");
			
		} else {
			System.out.println("Não pode entrar");
			}
		
		System.out.println(idade);
		
		
	}
}
