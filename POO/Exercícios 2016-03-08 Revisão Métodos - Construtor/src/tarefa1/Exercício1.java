package tarefa1;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Random;

public class Exercício1 {
	public static void main(String[] args) {
		Random gerador = new Random();
		int posicao = 0;
		Date data = new Date();
		String [] nomesPossiveis = {"João","José","Pedro","Marcelo","Augusto","Caick","Brai","Izabela","Sovat","Thiago"};
		Correntista novoCorrentista;
		
		List<Correntista> banco = new ArrayList<Correntista>();
		
		for (int i = 0; i < 5; i++) {
			posicao = gerador.nextInt(10);
			novoCorrentista = new Correntista(1000+i,nomesPossiveis[posicao],data,500*i);
			banco.add(novoCorrentista);
		}
			
		for (Correntista correntista : banco) {
			System.out.println("Conta Simples Número:" + correntista.idConta);
			System.out.println("Titular:" + correntista.titular);
			System.out.println("Data de Abertura:" + correntista.abertura);
			System.out.println("Saldo: R$" + correntista.saldo);
		}
	}
}
