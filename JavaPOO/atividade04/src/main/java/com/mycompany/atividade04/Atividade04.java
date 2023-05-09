/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.atividade04;


public class Eleitor {
    private int idade;
    private String classeEleitoral;
    
    
    public int getIdade(){
        return idade;
    }
    
    public String getClasse(){
        return classeEleitoral;
    }
    
    public void defineClasseEleitoral(){
        if(idade < 16){
            classeEleitoral = "Não Eleitor";
        }else if(idade >= 16 && idade < 18 || idade >= 65){
            classeEleitoral = "Eleitor Facultativo";
        }else{
            classeEleitoral = "Eleitor Obrigatório";
        }
    }

    void setIdade(int i) {
        this.idade = i;
    }
}

public class Atividade04 {

    public static void main(String[] args) {
        
        Eleitor eleitor = new Eleitor();
        eleitor.setIdade(25);
        eleitor.defineClasseEleitoral();
        System.out.println("Idade: " + eleitor.getIdade());
        System.out.println("Classe eleitoral: " + eleitor.getClasse());
        
    }
}
