package br.edu.ifsp.models;

import java.util.ArrayList;
import java.util.List;

public class Leilao {
	private String descricao;
	private List<Lance> lances;

	
	public Leilao (String descricao){
		this.descricao = descricao;
		this.lances = new ArrayList<Lance>();
	}
	
	public void propoe(Lance lance){
		int total = qtdLance(lance.getUsuario());
		
		if (this.lances.isEmpty() || 
				(!ultimoLance().getUsuario().equals(lance.getUsuario())&& total < 5)){
			this.lances.add(lance);
		}
		
		
	}

	private int qtdLance(Usuario usuario) {
		int total = 0;
		for (Lance l : this.lances){
			if (l.getUsuario().equals(usuario))
				total++;
		}
		return total;
	}

	public Lance ultimoLance() {
		return this.lances.get(lances.size()-1);
	}

	public String getDescricao() {
		return descricao;
	}

	public void setDescricao(String descricao) {
		this.descricao = descricao;
	}

	public List<Lance> getLances() {
		return lances;
	}

	public void setLances(List<Lance> lances) {
		this.lances = lances;
	}
	
		
	
}
