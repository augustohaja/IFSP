package tarefa2;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class ContadorPalavras {
	
	public static int contarPalavrasConsiderandoRepeticoes(List<String> listaDePalavras){
		int contador = 0;
		
		contador = listaDePalavras.size();

		return contador;
	}
	
	public static int contarPalavrasSemRepeticoes(List<String> listaDePalavras){
		int contador = 0;
		Set<String> conjuntoDePalavras = new HashSet<String>();
		
		for (String elemento : listaDePalavras) {
			conjuntoDePalavras.add(elemento);
		}
		
		contador = conjuntoDePalavras.size();
		
		return contador;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		List<String> listaDePalavras = new ArrayList<String>();
		String palavra;
		int contComRepeticoes = 0;
		int contSemRepeticoes = 0;
		
		do {
			palavra = "";
			System.out.println("Entre uma nova palavra: ");
			palavra = sc.nextLine();
			if (!palavra.isEmpty()){
				listaDePalavras.add(palavra);
			}
		} while (!palavra.isEmpty());
		
		contComRepeticoes = ContadorPalavras.contarPalavrasConsiderandoRepeticoes(listaDePalavras);
		contSemRepeticoes = ContadorPalavras.contarPalavrasSemRepeticoes(listaDePalavras);
		
		System.out.println("Total de palavras com repetições: " + contComRepeticoes);
		System.out.println("Total de palavras sem repetições: " + contSemRepeticoes);
	}
}
