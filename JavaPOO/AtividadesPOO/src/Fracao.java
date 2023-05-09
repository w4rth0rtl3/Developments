/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author aliss
 */
public class Fracao{
    private int numerador;
    private int denominador;
    
    public Fracao(){

        this.numerador = 7;
        this.denominador = 3;
    }
    
 public String toString() {
        int parteInteira = numerador / denominador;
        int resto = numerador % denominador;
        if (resto == 0) {
            return String.valueOf(parteInteira);
        } else {
            int mdc = mdc(resto, denominador);
            int novoNumerador = resto / mdc;
            int novoDenominador = denominador / mdc;
            if (parteInteira == 0) {
                return novoNumerador + "/" + novoDenominador;
            } else {
                return parteInteira + " + " + novoNumerador + "/" + novoDenominador;
            }
        }
    }
    
    public float toDecimal() {
        return (float) numerador / denominador;
    }
    
    public void simplify() {
        int mdc = mdc(numerador, denominador);
        numerador /= mdc;
        denominador /= mdc;
    }
    
    private int mdc(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return mdc(b, a % b);
        }
    }
}
