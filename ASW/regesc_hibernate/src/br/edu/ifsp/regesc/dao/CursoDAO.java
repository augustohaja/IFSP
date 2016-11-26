package br.edu.ifsp.regesc.dao;

import java.util.List;

import javax.persistence.EntityManager;
import javax.persistence.Query;

import br.edu.ifsp.regesc.db.JPAUtil;
import br.edu.ifsp.regesc.models.Curso;
import br.edu.ifsp.regesc.models.Student;

public class CursoDAO {
	private EntityManager manager;
	
	public CursoDAO(){
		this.manager = JPAUtil.getEntityManager();
	}
	
	@Override
	public void finalize(){
		this.manager.close();
	}
	
	public void insert(Curso curso){
		manager.getTransaction().begin();
		manager.persist(curso);
		manager.getTransaction().commit();
	}
	
	public void update(Curso curso){
		manager.getTransaction().begin();
		manager.merge(curso);
		manager.getTransaction().commit();
	}
	
	public void remove(Curso curso){
		manager.getTransaction().begin();
		curso = manager.find(Curso.class, curso.getId());
		manager.remove(curso);
		manager.getTransaction().commit();
	}
	
	public List<Curso> all (){
		Query query = manager.createQuery("select s from Curso s"); 
        List<Curso> list = query.getResultList();
    	
    	return list;
	}
}
