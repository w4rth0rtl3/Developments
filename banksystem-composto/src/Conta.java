

class Conta {
	
	private double saldo;
	int agencia;
	int numero;
	Client titular; 

	void deposita(double valor){
		this.saldo += valor;
	}
	
	public boolean saca(double valor){
		if (saldo >= valor){
			this.saldo -= valor;
			return true;
		} else {
			System.out.println("Saldo insuficiente\nsaldo: " + saldo);
			return false;
		}
	}
	
	public boolean transfere(double valor, Conta destino){
		if (this.saldo >= valor){
			this.saldo -= valor;
			destino.deposita(valor);
			return true;
		} else {
			System.out.println("Saldo insuficiente\nsaldo: " + saldo);
			return false;
		}
	}
	
	public double getSaldo(){
		return this.saldo;
	}
			
}
