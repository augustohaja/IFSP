package br.edu.ifsp.models;

public class Avaliador {
	private double maiorLance = Double.NEGATIVE_INFINITY;
	private double menorLance = Double.POSITIVE_INFINITY;
	private double media;
	
	
	public void avaliar (Leilao leilao){
		for(Lance l : leilao.getLances()){
			if (maiorLance < l.getValor()){
				maiorLance = l.getValor();
			}
			if (menorLance > l.getValor()){
				menorLance = l.getValor();
			}
			media += l.getValor(); 
		}
		media = media/leilao.getLances().size();
	}
	
	public Double getMaiorLance() {
		return maiorLance;
	}
	public void setMaiorLance(Double maiorLance) {
		this.maiorLance = maiorLance;
	}
	public Double getMenorLance() {
		return menorLance;
	}
	public void setMenorLance(Double menorLance) {
		this.menorLance = menorLance;
	}
	public Double getMedia() {
		return media;
	}
	public void setMedia(Double media) {
		this.media = media;
	}
	
	
}
