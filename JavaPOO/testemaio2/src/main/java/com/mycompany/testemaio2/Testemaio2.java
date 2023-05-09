/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.testemaio2;

class Pessoa{
    private String nome;
    private int idade;
    
    public void DefineNome(String valor){
        this.nome = valor;
    }
    
    public void DefineIdade(int valor){
        this.idade = valor;
    }
    
    public int RetornaIdade(){
        return this.idade;
    }
    
    public String RetornaNome(){
        return this.nome;
    }
}

class Professor extends Pessoa{
    private String formação;
    private float salario;
    private int cargaHoraria;
    
    public void DefineFormação(String Formação){
        this.formação = Formação;
    }
    
    public String RetornaFormação(){
        return this.formação;
    }
    
    public void DefineSalario(float salario){
        this.salario = salario;
    }
    
    public float RetornaSalario(){
        return this.salario;
    }
    
    
    public void DefineCargaHoraria(int horas){
        this.cargaHoraria = horas;
    }
    
    public int RetornaCargaHoraria(){
        return this.cargaHoraria;
    }
}

public class Testemaio2 {

    public static void main(String[] args) {
        System.out.println("Hello World!");
        Pessoa P = new Pessoa();
        P.DefineIdade(18);
        System.out.println(P.RetornaIdade());
        Professor J = new Professor();
        J.DefineNome("Kleber");
        J.DefineCargaHoraria(255);
        
        System.out.println("Professor(a) " + J.RetornaNome() + " trabalha " + J.RetornaCargaHoraria());
       
    }
}
