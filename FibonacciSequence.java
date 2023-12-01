/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package t123b1;
import java.util.Scanner;
/**
 *
 * @author faizcan
 */
public class FibonacciSequence {
    public Scanner scanner = new Scanner(System.in);
    
    public static void main (String[] args) {
        FibonacciSequence fib = new FibonacciSequence();
        fib.run();
        
    }
        public void run(){
        System.out.print("Masukkan batas: ");
        int count = scanner.nextInt();
        
        
    int n1=0,n2=1,n3,i;
    System.out.print( n1 + " " +n2);

    for(i=2; i<= count ;++i){
    n3 = n1 + n2;
    System.out.print(" "+ n3);
    n1 = n2;
    n2 = n3;
    }
    scanner.close();
}
}

