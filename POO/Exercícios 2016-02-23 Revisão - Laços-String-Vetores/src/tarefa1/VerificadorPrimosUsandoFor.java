package tarefa1;

import java.util.Scanner;

public class VerificadorPrimosUsandoFor{

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
		
		for (int i=-num; i <= num; i++){
			if (i != 0){ 
				if (num%i == 0){
					cont ++;
				}
			}
		}
		
		if (cont == 4){
			return true;
		}
		
		return false;
	}
}
