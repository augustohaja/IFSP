package br.edu.ifsp.regesc.app;

import br.edu.ifsp.regesc.dao.StudentDAO;
import br.edu.ifsp.regesc.models.Student;

public class Test2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student student = new Student("Bifao Doidão", 100);
		student.setId(7L);
		StudentDAO dao = new StudentDAO();
		
		dao.delete(student);
		
	}

}
