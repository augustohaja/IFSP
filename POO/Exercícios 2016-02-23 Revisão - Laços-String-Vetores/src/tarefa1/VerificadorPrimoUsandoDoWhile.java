package tarefa1;

import java.util.Scanner;

public class VerificadorPrimoUsandoDoWhile {
	public static void main(String[] args) {
		Scanner	scanner	=	new	Scanner(System.in);
		int num;
		boolean lRetorno;
		
		System.out.println("Entre com um número qualquer: ");
		num = scanner.nextInt();
		
		lRetorno = ehPrimo(num);
		
		if (lRetorno) {
			System.out.println("É Primo!");
		} else {
			System.out.println("Não é Primo!");
		}
		
	}
	
	public static boolean ehPrimo(int num){
		int cont = 0;
		int i = -num;
		
		do {
			if (i != 0){ 
				if (num%i == 0){
					cont ++;
				}
			}
			i++;
		} while (i <= num);
		
		if (cont == 4){
			return true;
		}
		
		return false;
	}
}
