package tarefa2;

public class Identidade {
	
	public boolean saoAMesmaInstancia (Object o1, Object o2){
		if (o1 == o2) {
			return true;
		} else {
			return false;
		}
	}

	public boolean saoLogicamenteIguais(Object o1, Object o2){
		if (o1.equals(o2)){
			return true;
		} else {
			return false;
		}
	}

	public static void main(String[] args) {
			// TODO Auto-generated method stub
			Identidade obj = new Identidade(); 
			Object o1 = new Integer(10);
			Object o2 = new Integer(10);
			
			System.out.println(obj.saoAMesmaInstancia(o1, o2));
			System.out.println(obj.saoLogicamenteIguais(o1, o2));
			
			o1 = o2;
			
			System.out.println(obj.saoAMesmaInstancia(o1, o2));
			System.out.println(obj.saoLogicamenteIguais(o1, o2));
			
			
	}
}
