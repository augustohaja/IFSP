package tarefa4.sistemafinanceiro;

public class Banco {
	int saldo;
	
	public Banco (int saldo){
		this.saldo = saldo;
	}
	
	public void depositar (int valor){
		this.saldo += valor;
	}
	
	public int valorTotalDepositado(){
		return this.saldo;
	}
}
