package br.edu.ifsp.regesc.app;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

import br.edu.ifsp.regesc.models.Student;

public class Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student student = new Student("Robin",39);
		student.setId(6L);
		System.out.println(student);
		
		EntityManagerFactory factory = Persistence.createEntityManagerFactory("regesc");
		
		EntityManager manager = factory.createEntityManager();
		
		manager.getTransaction().begin();
		
//		manager.persist(student);
		Student student2 = manager.find(Student.class, 2L);
//		student2.setName("Homem de Ferro");
		manager.remove(student2);
		//manager.merge(student);
		
		manager.getTransaction().commit();
		manager.close();
		
		System.out.println(student);
	}
}
