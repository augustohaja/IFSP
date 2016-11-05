package tarefa2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class FiltroAlunosAprovados {
	List<Aluno> listaDeAlunos = new ArrayList<Aluno>();
	
	public void adicionar (String nome, double nota){
		Aluno novoAluno = new Aluno(nome,nota);
		listaDeAlunos.add(novoAluno);
	}
	
	public List<Aluno> obterListaDeAprovados(){
		List<Aluno> listaDeAprovados = new ArrayList<Aluno>();
		
		for (Aluno elemento : listaDeAlunos) {
			if (elemento.nota >= 6){
				listaDeAprovados.add(elemento);	
			}
		}
		return listaDeAprovados;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		
		String nome = "";
		float nota = 0;
		
		List <Aluno> listaDeAprovados = new ArrayList<Aluno>();
		FiltroAlunosAprovados novaLista = new FiltroAlunosAprovados();
		
		do{
			System.out.println("Entre com o primeiro Aluno");
			System.out.println("Nome:");
			nome = sc.nextLine();
		} while (nome.isEmpty());
		
		System.out.println("Nota Final:");
		nota = sc.nextFloat();

		novaLista.adicionar(nome,nota);
		
		listaDeAprovados = novaLista.obterListaDeAprovados(); //Com referência	}
		
		for (Aluno elemento : listaDeAprovados) {
			System.out.print("Nome do Aluno: "+ elemento.nome);
			System.out.print(elemento.nota);
		}
		
		System.out.print("Passou por aqui!");
	}
}
