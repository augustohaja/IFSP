package br.edu.ifsp.models;

public class Usuario {
	private int id;
	private String nome;
	
	public Usuario(String nome){
		this.id = 0;
		this.nome = nome;
	}
	
	public Usuario(int id, String nome){
		this.id = id;
		this.nome = nome;
	}
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}

	@Override
	public String toString() {
		return "Usuario [id=" + id + ", nome=" + nome + "]";
	}
	
	public boolean equals(Usuario usuario) {
		return this.id == usuario.getId();
	}



	
	
	
}
