
package br.edu.ifsp.regesc.dao;

import java.util.List;

import javax.persistence.Query;
import javax.persistence.EntityManager;

import br.edu.ifsp.regesc.db.JPAUtil;
import br.edu.ifsp.regesc.models.Student;


public class StudentDAO {
	private EntityManager manager;
	    
    public StudentDAO() {
        this.manager = JPAUtil.getEntityManager();
    }
    
    
    // este método sempr é chamado antes do objeto ser destruído
    // último suspiro de vida do objeto
    @Override
    public void finalize() {
      this.manager.close();
    }
    
    
    public void insert(Student student) {
    	this.manager.getTransaction().begin();
    	this.manager.persist(student);
    	this.manager.getTransaction().commit();
    }
    
    
    public void update(Student student) {
    	this.manager.getTransaction().begin();
    	this.manager.merge(student);
    	this.manager.getTransaction().commit();
	}
    
    
    public void delete(Student student) {
       	this.manager.getTransaction().begin();
       	student = this.manager.find(Student.class, student.getId());
    	this.manager.remove(student);
    	this.manager.getTransaction().commit();
	}
    
    public List<Student> all() {
    	Query query = manager.createQuery("select s from Student s"); 
        List<Student> list = query.getResultList();
    	
    	return list;
    }


	
}



