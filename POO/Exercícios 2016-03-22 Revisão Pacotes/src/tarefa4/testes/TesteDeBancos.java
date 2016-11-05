package tarefa4.testes;

import java.util.ArrayList;
import java.util.List;
import java.util.Random;

import tarefa4.sistemafinanceiro.Banco;

public class TesteDeBancos {

	public static void main(String[] args) {
		Random gerador = new Random();
		Banco atual;
		int j = 1;
		tarefa4.sistemadearmazenamento.Banco carteira = new tarefa4.sistemadearmazenamento.Banco();
		List<Object> clientes = new ArrayList<Object>();
		List<Integer> identificadores = new ArrayList<Integer>();
		
		for (int i = 0; i < 5; i++) {
			atual = new Banco(gerador.nextInt(200));
			clientes.add(atual);
		}
		
		for (Object object : clientes) {
			Banco temp;
			temp = (Banco) object;
			if (temp.valorTotalDepositado()<=200){
				temp.depositar(100);
			}
		}
		
		for (Object object : clientes) {
			Banco temp;
			temp = (Banco) object;
			System.out.printf("\nSaldo do cliente: " + temp.valorTotalDepositado());
		}
		
		for (Object object : clientes) {
			Banco temp;
			temp = (Banco) object;
			identificadores.add (carteira.armazenar(temp));
		}
		
		System.out.printf("\n\n Tamanho da lista do Sistema de Armazenamento: " + carteira.tamanho());
		
		if (carteira.possui(clientes.get(identificadores.get(2)))){
			Banco bancoPesq;
			bancoPesq = (Banco) (carteira.buscarPorId(identificadores.get(2)));
			System.out.printf("\n Saldo do cliente 3: " + bancoPesq.valorTotalDepositado());
		}
	}
}
