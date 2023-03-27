package cadastrofalha2;

import javax.swing.JOptionPane;

public class CadastroFalha2 {

    public static void main(String[] args) {
        
        
        String nomeFalha = JOptionPane.showInputDialog("Qual o nome da falha ?");
        String localFalha = JOptionPane.showInputDialog("Qual a localização da falha ?");
        double scoreFalha = Double.parseDouble(JOptionPane.showInputDialog("Criticidade da falha ?"));
              
        JOptionPane.showMessageDialog(null, "A falha de " + nomeFalha + "\nEncontrada em: " + localFalha + "\nCriticidade de: " + scoreFalha);
        // TODO code application logic here
    }
    
}
