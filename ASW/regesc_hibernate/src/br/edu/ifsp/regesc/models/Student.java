
package br.edu.ifsp.regesc.models;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;

@Entity
public class Student {
	@Id @GeneratedValue(strategy=GenerationType.IDENTITY)
    private long id;
	@Column(length = 64)
    private String name;
    private int age;
    private String city;

    public Student() {
    	this.id = -1;
    	this.age = -1;
    }

    public Student(String name, int age) {
        this.id = -1;
        this.name = name;
        this.age = age;
    }

    public long getId() {
        return id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    @Override
    public String toString() {
        return "Student{" + "id=" + id + ", name=" + name + ", age=" + age + '}';
    }
    
    
    
}
