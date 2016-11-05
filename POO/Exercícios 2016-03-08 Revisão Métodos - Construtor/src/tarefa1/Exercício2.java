package tarefa1;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import java.util.Random;

public class Exercício2 {
	public static void main(String[] args) {
		Random gerador = new Random();
		int posicao = 0;
		Date data = new Date();
		String [] nomesPossiveis = {"João","José","Pedro","Marcelo","Augusto","Caick","Brai","Izabela","Sovat","Thiago","Maria","Joana","Pedrina","Marcela","Augusta","Patrícia","Rafaela","Bela","Marcos","Kakimoto"};
		Correntista novoCorrentista;
		
		List<Correntista> banco = new ArrayList<Correntista>();
		
		for (int i = 0; i < 2; i++) {
			posicao = gerador.nextInt(20);
			novoCorrentista = new Correntista(1000+i,nomesPossiveis[posicao],data,500*(i+posicao));
			banco.add(novoCorrentista);
		}
			
		for (Correntista correntista : banco) {
			System.out.println("Conta Simples Número:" + correntista.idConta);
			System.out.println("Titular:" + correntista.titular);
			System.out.println("Data de Abertura:" + correntista.abertura);
			System.out.println("Saldo: R$ " + correntista.saldo);
			System.out.println("\n");
		}
		
		Correntista.Transferir(banco.get(0),banco.get(1),100);
		
		for (Correntista correntista : banco) {
			System.out.println("Conta Simples Número:" + correntista.idConta);
			System.out.println("Titular:" + correntista.titular);
			System.out.println("Data de Abertura:" + correntista.abertura);
			System.out.println("Saldo: R$ " + correntista.saldo);
			System.out.println("\n");
		}
	}

}
