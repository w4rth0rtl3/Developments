/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package aula06.encapsulamento;


class Funcionario {
    private double salario;
    private String nome;
    
    public double getSalario(){
    
        return this.salario;
    }
    
    public String getNome(){
    
        return this.nome;
    }
    
    public void setSalario(double valor){
        // Essa classe vai conter códigos para verificar se não há nenhum erro nos dados passados
        
        this.salario = valor;
    }
    
 
       public void setNome(String valor){
        this.nome = valor;
    }
       
 
    
}

public class Encapsulamento {

    public static void main(String[] args) {
        //System.out.println("Hello World!");
    
        Funcionario F = new Funcionario();
        F.setNome("Rusbé");
        F.setSalario(123123.11);
        
        System.out.println(F.getNome());
        
        System.out.println(F.getSalario());
    }
}
