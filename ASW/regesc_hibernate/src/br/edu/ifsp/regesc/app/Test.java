package br.edu.ifsp.regesc.app;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

import br.edu.ifsp.regesc.dao.CursoDAO;
import br.edu.ifsp.regesc.dao.StudentDAO;
import br.edu.ifsp.regesc.db.JPAUtil;
import br.edu.ifsp.regesc.models.Curso;
import br.edu.ifsp.regesc.models.Student;

public class Test {

	public static void main(String[] args) {
		
		Curso curso = new Curso();
		curso.setNome("TADS");
		
		new CursoDAO().insert(curso);
		
		Student student = new Student();
		student.setAge(21);;
		student.setName("Maria");
		student.setCurso(curso);
		
		new StudentDAO().insert(student);
	}
}
