package agenciabancaria;

/**
 *
 * @author w4rth0rtl3
 */

class Cliente {

    String Nome;
    String CPF; // 000.111.222.-33
    String RG;
    String Telefone;
    String Endereco;
    
    int RendaMensal;
    int Saldo;
    
    //String Agencia; // Poderia ser int, iria consumir menos memória 
    //String ContaCorrente;
    
    // Uma classe pode ter mais de um construtor, 
    // eles serão diferenciados de acordo com seus atributos
    
    Cliente(String N, String C, String R, String T, String E, int RM, int S) { //Construtor para ler dados e iniciar varíaveis 
    
        if(this.VerificarCPF(C) == true){
            this.CPF = C;
        }
        
       
        this.Nome = N;
        this.RG = R;
        this.Telefone = T;
        this.Endereco = E;
        this.RendaMensal = RM;
        this.Saldo = S;
        
    };
    
       boolean VerificarCPF(String CPF){
        
            // Pesquisar como validar um CPF !
            return(true);
        }
       
       boolean ReceberDeposito(int valor, String ContaCorrente){
           
           if(valor > 0f){
                this.Saldo = this.Saldo + valor;
                return(true);
           }
           else{
               return(false);
           }
       }
       
       boolean EfetuarSaque(int valor){
           if(this.Saldo >= valor){
               this.Saldo = this.Saldo - valor;
               return(true);
           }
           
           else{
               return(false);
           }
       }
       
       float ExibirSaldo(){
           return(this.Saldo);
       }
        
    
}

public class AgenciaBancaria {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        System.out.print("Agencia bancaria !\n");
        
        Cliente A = new Cliente("Alisson", "0011223344", "111.222.333.44", "557101234567", "Rua dos bobos", 100000, 1000);
        System.out.println(A.Nome);
                
    }
    
}
