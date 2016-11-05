package br.edu.ifsp.regesc.db;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

public class JPAUtil {
	//Quando a classe for carregada pela JVM, este atributo proprietário da classe
	// é carregado também.
	private static EntityManagerFactory factory = Persistence.createEntityManagerFactory("regesc");

	public static EntityManager getEntityManager(){
		return factory.createEntityManager();
	}
}
