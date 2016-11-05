package tarefa1;

public class Funcionario {
	private String nome;
	private int matricula;
	protected double salario;
	
	void SetNome(String nome){
		this.nome = nome;
	}
	
	void SetSalario(double salario){
		this.salario = salario;
	}
	
	public double getBonus(){
		return this.salario*.10;
	}
}
