/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.atividadeproduto;


public class Produto{

    private String nome;
    private double precoCusto;
    private double precoVenda;
    private double margemLucro;
    private double PorcentagemLucro;
    
    public String getNome(){
        return this.nome;
    }
    
    
    public double getPrecoCusto(){
        return this.precoCusto;
    }
    
    
    public double getPrecoVenda(){
        return this.precoVenda;
    }
    
    
    public double getmargemLucro(){
        return this.margemLucro;
    }
    
    public void setNome(String NomeProduto){
        this.nome = NomeProduto;
    }
    
    public void setPrecoCusto(double Custo){
        this.precoCusto = Custo;
    }
    
    public void setPrecoVenda(double Venda){
        
        if(Venda > (this.precoCusto * 2)){
            this.precoVenda = Venda;
        }
        else {
            System.out.println("O preco de venda do produto está abaixo do custo do produto");
        }
    }

    public double calcularMargemLucro(){
        this.margemLucro = this.precoVenda - (this.precoCusto * 2); 
        return this.margemLucro;
    }
    
    public double getPorcentagemLucro(){
        this.PorcentagemLucro = (((this.precoVenda - this.precoCusto) * 100) / this.precoCusto);
        return PorcentagemLucro;
}
     
}

public class AtividadeProduto {

    public static void main(String[] args) {
        System.out.println("Hello World!");
    }
}
