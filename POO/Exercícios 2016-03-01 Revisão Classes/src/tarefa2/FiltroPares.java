package tarefa2;

import java.util.ArrayList;
import java.util.List;

public class FiltroPares {
	List<Integer> numerosArmazenados = new ArrayList<Integer>(); 
	
	public void adicionar(int numero){
		numerosArmazenados.add(numero);
	}
	
	public List <Integer> obterListaDePares(){
		List<Integer> numerosPares = new ArrayList<Integer>();
		
		for (Integer elemento : numerosArmazenados){
			if ((elemento%2) == 0 ){
				numerosPares.add(elemento);
			}
		}
		return numerosPares;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		List <Integer> numerosPares;
		FiltroPares obj = new FiltroPares();
		
		
		obj.adicionar(10);
		obj.adicionar(7);
		obj.adicionar(6);
		obj.adicionar(3);
		
		numerosPares = new ArrayList (obj.obterListaDePares()); //Sem referência
		
		//numerosPares = obj.obterListaDePares(); //Com referência
		
		System.out.println("Números pares:");
		
		for (Integer elemento : numerosPares) {
			System.out.println(elemento);
		}
		
	}

}
