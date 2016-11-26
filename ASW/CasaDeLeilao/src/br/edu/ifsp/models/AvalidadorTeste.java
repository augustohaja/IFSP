package br.edu.ifsp.models;

import org.junit.Assert;
import org.junit.Test;

public class AvalidadorTeste {
	@Test
	public void testaLancesEmOrdemAleatoria (){
		Leilao leilao = new Leilao("Notebook");
	
		Usuario joao = new Usuario(1,"João");
		Usuario maria = new Usuario(2,"Maria");
		Usuario jose = new Usuario(3,"José");
	
		leilao.propoe(new Lance(joao,	100.0));
		leilao.propoe(new Lance(maria,	50.0));
		leilao.propoe(new Lance(jose,	150.0));
	
		Avaliador avaliador = new Avaliador();
		avaliador.avaliar(leilao);
	
		Assert.assertEquals(150.0, avaliador.getMaiorLance(), 0.00001);
		Assert.assertEquals(50.0, avaliador.getMenorLance(), 0.00001);
		Assert.assertEquals(100.0, avaliador.getMedia(), 0.00001);
	}
	
	@Test
	public void testaLancesEmOrdemCrescente (){
		Leilao leilao = new Leilao("Notebook");
	
		Usuario joao = new Usuario(1,"João");
		Usuario maria = new Usuario(2,"Maria");
		Usuario jose = new Usuario(3,"José");
	
		leilao.propoe(new Lance(maria,	50.0));
		leilao.propoe(new Lance(joao,	100.0));
		leilao.propoe(new Lance(jose,	150.0));
	
		Avaliador avaliador = new Avaliador();
		avaliador.avaliar(leilao);
	
		Assert.assertEquals(150.0, avaliador.getMaiorLance(), 0.00001);
		Assert.assertEquals(50.0, avaliador.getMenorLance(), 0.00001);
		Assert.assertEquals(100.0, avaliador.getMedia(), 0.00001);
	}
	
	@Test
	public void testaLancesEmOrdemDecrescente (){
		Leilao leilao = new Leilao("Notebook");
	
		Usuario joao = new Usuario(1,"João");
		Usuario maria = new Usuario(2,"Maria");
		Usuario jose = new Usuario(3,"José");
	
		leilao.propoe(new Lance(maria,	150.0));
		leilao.propoe(new Lance(joao,	100.0));
		leilao.propoe(new Lance(jose,	50.0));
	
		Avaliador avaliador = new Avaliador();
		avaliador.avaliar(leilao);
	
		Assert.assertEquals(150.0, avaliador.getMaiorLance(), 0.00001);
		Assert.assertEquals(50.0, avaliador.getMenorLance(), 0.00001);
		Assert.assertEquals(100.0, avaliador.getMedia(), 0.00001);
	}
}
