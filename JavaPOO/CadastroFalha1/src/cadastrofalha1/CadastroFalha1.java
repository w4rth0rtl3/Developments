package cadastrofalha1;

import java.util.Scanner;

public class CadastroFalha1 {

    public static void main(String[] args) {

        
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite o nome da falha encontrada: ");
        String nomeFalha = sc.nextLine();
        
        System.out.println("Digite o local da falha: ");
        String localFalha = sc.nextLine();
        
        System.out.println("Digite a severidade da falha (ex: 7,9): ");
        double scoreFalha = sc.nextDouble();
        
        System.out.println("Falha de: " + nomeFalha + "\n  Econtrada na URL: " + localFalha + "\n  Com uma severidade de: " + scoreFalha);
        

    }
    
}
