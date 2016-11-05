package E11;

import java.util.Scanner;

public class E11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
	    double a,b,c,delta,x1,x2 = 0;
	    
	    do {
	    	System.out.println("Entre com o valor de a: ");
	    	a = sc.nextDouble();
	    } while (a <= 0);
	    
	    System.out.println("Entre com o valor de b: ");
	    b = sc.nextDouble();
	    System.out.println("Entre com o valor de c: ");
	    c = sc.nextDouble();
	    
	    delta = (b*b) - (4 * a * c);
	    
	    System.out.printf("Delta: %2f\n", delta);
	    System.out.printf("Raiz de delta: %2f\n", Math.sqrt(delta));
	    
	    x1 = ((-b) + Math.sqrt(delta))/(2*a);
	    x2 = ((-b) - Math.sqrt(delta))/(2*a);
	    
	    System.out.printf("Os resultados possíveis para x são %2f e %2f",x1,x2);
	    
	    sc.close();
	}

}
