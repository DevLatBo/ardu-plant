/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package voz;
import java.util.Scanner;
/**
 *
 * @author Oscar
 */
public class main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner lector = new Scanner(System.in);
        String cadena = lector.next();
        if(cadena.equals("leer")){
            Lee.main(args);
        }else if(cadena.equals("escuchar")){
            Escucha.main(args);
        }else{
            System.out.println("ninguno");
        }
    }
    
}
