package br.edu.ifsp.regesc.controllers;

import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;

import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.fxml.Initializable;
import javafx.scene.control.Menu;
import javafx.scene.control.MenuItem;
import javafx.scene.layout.AnchorPane;


public class VBoxAppController implements Initializable {
	@FXML
	private Menu menuCadastros;
	@FXML
	private MenuItem menuItemCadastrosAlunos;
	@FXML
	private MenuItem menuItemCadastrosCursos;
	@FXML
	private Menu menuAjuda;
	@FXML
	private MenuItem menuItemAjudaSobre;
	@FXML
	private AnchorPane anchorPane;
	

	@Override
	public void initialize(URL location, ResourceBundle resources) {
		// TODO Auto-generated method stub
		
	}
	
	
	@FXML
	public void handleMenuCadastroAlunos() throws IOException {
		System.out.println("*****************************");
		FXMLLoader loader = new FXMLLoader();
		loader.setLocation(getClass().getResource("/br/edu/ifsp/regesc/views/AnchorPaneAlunos.fxml"));
		AnchorPane ap = (AnchorPane) loader.load();
		AnchorPaneAlunosController alunosController = (AnchorPaneAlunosController)loader.getController();
		
		alunosController.setAppController(this);
		
		this.anchorPane.getChildren().setAll(ap);
	}

	public AnchorPane getAnchorPane(){
		return this.anchorPane;
	}
	
	public void setAnchorPane(AnchorPane a){
		this.anchorPane = a;
	}
}





