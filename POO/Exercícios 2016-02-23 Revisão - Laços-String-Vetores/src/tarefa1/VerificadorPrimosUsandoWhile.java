package tarefa1;

import java.util.Scanner;

public class VerificadorPrimosUsandoWhile {
	public static void main(String[] args) {
		Scanner	scanner	=	new	Scanner(System.in);
		int num;
		boolean lRetorno;
		
		System.out.println("Entre com um n�mero qualquer: ");
		num = scanner.nextInt();
		
		lRetorno = ehPrimo(num);
		
		if (lRetorno) {
			System.out.println("� Primo!");
		} else {
			System.out.println("N�o � Primo!");
		}
		
	}
	
	public static boolean ehPrimo(int num){
		int cont = 0;
		int i = -num;
		
		while (i <= num){
			if (i != 0){ 
				if (num%i == 0){
					cont ++;
				}
			}
			i++;
		}
		
		if (cont == 4){
			return true;
		}
		
		return false;
	}
}
