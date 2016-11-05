package tarefa1;

import java.util.Date;

public class Correntista {
	int idConta;
	String titular;
	Date abertura;
	double saldo;
	
	public Correntista(int idConta,String titular,Date abertura,double saldo){
		this.idConta = idConta;
		this.titular = titular;
		this.abertura = abertura;
		this.saldo = saldo;
	}
	
	public static boolean  Transferir(Correntista Origem,Correntista Destino, double valor){
		Origem.saldo -= valor;
		Destino.saldo += valor;
		return true;
	}
	
}
