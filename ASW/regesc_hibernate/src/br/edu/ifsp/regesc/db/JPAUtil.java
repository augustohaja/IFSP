package br.edu.ifsp.regesc.db;

import javax.persistence.EntityManager;
import javax.persistence.EntityManagerFactory;
import javax.persistence.Persistence;

public class JPAUtil {
	//Quando a classe for carregada pela JVM, este atributo propriet�rio da classe
	// � carregado tamb�m.
	private static EntityManagerFactory factory = Persistence.createEntityManagerFactory("regesc");

	public static EntityManager getEntityManager(){
		return factory.createEntityManager();
	}
}
