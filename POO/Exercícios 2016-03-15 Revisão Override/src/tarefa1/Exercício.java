package tarefa1;

public class Exerc�cio {

	public static void main(String[] args) {
		Gerente novoGerente = new Gerente();

		novoGerente.SetNome("Jo�o da Silva");
		novoGerente.SetSenha(6543);
		novoGerente.SetSalario(1000);
		
		System.out.println(novoGerente.getBonus());
	}

}
