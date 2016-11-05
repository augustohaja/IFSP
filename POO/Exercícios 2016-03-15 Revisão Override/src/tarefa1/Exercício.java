package tarefa1;

public class Exercício {

	public static void main(String[] args) {
		Gerente novoGerente = new Gerente();

		novoGerente.SetNome("João da Silva");
		novoGerente.SetSenha(6543);
		novoGerente.SetSalario(1000);
		
		System.out.println(novoGerente.getBonus());
	}

}
