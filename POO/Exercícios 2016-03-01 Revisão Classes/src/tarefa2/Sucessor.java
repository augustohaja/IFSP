package tarefa2;

public class Sucessor {
	
	public int sucessorDe (int atual){
		return ++atual;
	}
	public Integer sucessrDe (Integer atual){
		return ++atual;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	Sucessor obj = new Sucessor();
	
	System.out.println(obj.sucessorDe(6));
	System.out.println(obj.sucessorDe(new Integer(6)));
	
	}

}
