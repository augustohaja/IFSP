package tarefa2;

public class ExecutorComandosString {
	
	public static void main (String[] args) {
		int num =0;
		
		num = ExecutorComandosString.executar("TAMANHO",	"augusto"); //:	2
		System.out.printf ("O tamanho da palavra oi é: %d \n",num);
		
		num = ExecutorComandosString.executar("TAMANHO",	"letícia"); //:	3
		System.out.printf ("O tamanho da palavra oi é: %d \n",num);
		
		num = ExecutorComandosString.executar("CONTAR_VOGAIS",	"liliana"); //:	2
		System.out.printf ("O tamanho da palavra oi é: %d \n",num);
		
		num = ExecutorComandosString.executar("CONTAR_CARACTERE",	"família"); //:	2
		System.out.printf ("O tamanho da palavra oi é: %d \n",num);
	}
	
	public static int executar (String operacao,String palavra){
		int num = 0;
		
		
		switch (operacao) {
		case "TAMANHO" :
			num = palavra.length(); 
			break;
		case "CONTAR_VOGAIS" :
			num = 0;
			for (int i=0; i<palavra.length();i++){
				if (palavra.charAt(i) == 'a' || palavra.charAt(i) == 'e' || palavra.charAt(i) == 'i' || palavra.charAt(i) == 'o' || palavra.charAt(i) == 'u'){
					num++;	
				}
			}
			break;
		case "CONTAR_CARACTERE" :
			num = 0;
			for (int i=0; i<palavra.length();i++){
				if (palavra.charAt(i) == 'a'){
					num++;	
				}
			}
			break;
		}
		
		return num;
	}
	
}
