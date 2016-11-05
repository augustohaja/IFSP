package tarefa1;

public class Gerente extends Funcionario {
	private int senha;
	private int quantidadeDeSubordinados;
	
	void SetSenha(int senha){
		this.senha = senha;
	}
	
	@Override
	public double getBonus(){
		return this.salario*.15;
	}
}
