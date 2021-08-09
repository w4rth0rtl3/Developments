package banksystem;

public class CriaConta {

	public static void main(String[] args) {
		Conta primeiraConta = new Conta();
		primeiraConta.saldo = 200;
		primeiraConta.titular = "Batatão";
		primeiraConta.saldo += 100;
		System.out.println(primeiraConta.saldo + " " + primeiraConta.titular);
		
		Conta segundaConta = new Conta();
		segundaConta.saldo = 250.50;
		
		System.out.println("Primeira conta tem: " + primeiraConta.saldo + "\nSegunda conta tem: " + segundaConta.saldo);
		System.out.println(primeiraConta.saldo + segundaConta.saldo);
	}
	
}
