/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package gonzaga;

/**
 *
 * @author aliss
 */
public class Gonzaga {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String Biografia = "texto muito grande";
        Biografia = Biografia + "Lorem ipisum";
        Biografia = Biografia + "mais texto";
        Biografia = Biografia.concat("mais texto nessa budega");
        
        System.out.println(Biografia);
        
        String nome = "Luiz Gonzaga";
        System.out.println(nome.charAt(3));
        
        for(int i = 11; i >= 0; i--){
           System.out.print(nome.charAt(i) + " ");
        }
        
        System.out.print(nome.length());
        
        String cidade = "Belo Horizonte";
       
        if(cidade.equals("Belo Horizonte")){
            System.out.println("Salve");
        }
        
        if(cidade == "Belo Horizonte"){
            System.out.println("Salve");
        }
        
        if(cidade.equalsIgnoreCase("belo horizonte")){
            System.out.println("Salve");
        }
    }
    
}
