/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exerciciostring;

import java.util.Scanner;

/**
 *
 * @author aliss
 */
public class ExercicioString {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite uma palavra ou frase: ");
        String palavra = sc.nextLine();
        
        System.out.println(palavra.length());
        System.out.println(palavra.toUpperCase());
        
        int contVogais = 0;
        
        for(int i = 0; i < palavra.length(); i++){
           
            if()
            contVogais += 1;
        }
        
        System.out.println(contVogais);
        
    }
    
}
