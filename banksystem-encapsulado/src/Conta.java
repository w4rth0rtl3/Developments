

class Conta {
	
	private double saldo;
	private int agencia;
	private int numero;
	private Client titular; 
	private static int total;
	
	
	public Conta(int agencia, int numero){
		Conta.total++; //total += 1;
		System.out.println("Total de Contas é: " + Conta.total);
		this.agencia = agencia;
		this.numero = numero;
		System.out.println("Estou criando uma conta" + "\nAgencia: " + this.agencia + "\nNumero: " + this.numero);
	}

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
	
	public int getNumero(){
		return this.numero;
	}
	
	public void setNumero(int numero){
		if(agencia <= 0){
			System.out.println("Não pode valor menor igual a 0 " + "numero");
			return;
		} else {
			this.numero = numero;
		}
	}
			
	public int getAgencia() {
		return this.agencia;
	}
	
	public void setAgencia(int agencia) {
		if(agencia <= 0){
			System.out.println("Não pode valor menor igual a 0 " + "agencia");
			return;
		} else {
			this.agencia = agencia;

		}
	}
	
	public void setTitular(Client titular) {
		this.titular = titular;
	}
	
	public Client getTitular() {
		return titular;
	}
	
	public static int getTotal(){
		return Conta.total;
	}
}
