package tarefa3;

import tarefa2.ExecutorComandosString;

public class ExecutorComandosVetorInt {
	
	public static void main (String[] args) {
		int [] vetor = {1,2,3,4,5};
		int num =0;
		
		num = ExecutorComandosVetorInt.executar("SOMAR",vetor);
		System.out.printf ("A soma dos n�meros �: %d \n",num);
		
		num = ExecutorComandosVetorInt.executar("MULTIPLICAR",vetor);
		System.out.printf ("A multiplica��o dos n�meros �: %d \n",num);
		
		num = ExecutorComandosVetorInt.executar("ENCONTRAR_MENOR",vetor);
		System.out.printf ("O menor n�mero �: %d \n",num);
		
		num = ExecutorComandosVetorInt.executar("ENCONTRAR_MAIOR",vetor);
		System.out.printf ("O maior n�mero �: %d \n",num);
		
		num = ExecutorComandosVetorInt.executar("ENCONTRAR_N",vetor);
		System.out.printf ("O n�mero se encontra na posi��o %d do vetor. \n",num);
	}
	
	public static int executar (String operacao,int [] numeros){
		int num = 0;
		
		switch (operacao) {
		case "SOMAR" :
			for (int i=0; i < numeros.length; i++){
				num+=numeros[i];
			} 
			break;
		case "MULTIPLICAR" :
			num = 0;
			for (int i=0; i < numeros.length; i++){
				if (i == 0){
					num = numeros[i];
				}
				num*=numeros[i];
			}
			break;
		case "ENCONTRAR_MENOR" :
			num = 0;
			for (int i=0; i < numeros.length; i++){
				if (i == 0){
					num = numeros[i];
				}
				if (num>numeros[i]){
					num=numeros[i];	
				}
			}
			break;
		case "ENCONTRAR_MAIOR" :
			num = 0;
			for (int i=0; i < numeros.length; i++){
				if (i == 0){
					num = numeros[i];
				}
				if (num<numeros[i]){
					num=numeros[i];	
				}
			}
			break;
		case "ENCONTRAR_N" :
			num = 0;
			for (int i=0; i < numeros.length; i++){
				if (numeros[i] == 2){
					num = i;
				}
			}
			break;
		}
		return num;
	}
}
