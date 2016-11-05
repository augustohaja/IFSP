package E12;

public class E12 {

	public static void main(String[] args) {
		int [] a = {3,7,2,8,9,1,10,6,4,5};
		int nAux = 0;
		
		System.out.printf("\nSequência desordenada: ");
		for (int i = 0; i < (a.length) ; i++){
			System.out.printf("%d,",a[i]);
		}
		
		System.out.printf("\nSequência ordenada: ");
		for (int i = 0; i < (a.length) ; i++){
			for (int j = 0; j < (a.length) ; j++){
				if (a[i]<a[j]){
					nAux = a[j];
					a[j] = a[i];
					a[i] = nAux;
				}
			}
		}
		
		for (int i = 0; i < (a.length) ; i++){
			System.out.printf("%d,",a[i]);
		}
	}
}
