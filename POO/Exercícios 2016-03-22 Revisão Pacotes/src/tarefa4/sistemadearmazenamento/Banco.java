package tarefa4.sistemadearmazenamento;

import java.util.ArrayList;
import java.util.List;

public class Banco {
	List<Object> clientes = new ArrayList<Object>();
	
	public int armazenar (Object o){
		this.clientes.add(o);
		return this.clientes.indexOf(o);
	}
	
	public boolean possui (Object o){
		boolean lRetorno = false;
		
		if (this.clientes.contains(o)){
			lRetorno = true;
		}
		return lRetorno;
	}
	
	public int tamanho (){
		return this.clientes.size();
	}
	
	public Object buscarPorId (int id){
		return this.clientes.get(id);
	}
}
