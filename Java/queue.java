import java.util.*;

public class Queue1 {
  public static void main(String[] args) {
    Queue<String>angka=new LinkedList<>();
    angka.offer("A");
    angka.offer("B");
    angka.offer("C");
    System.out.println("Queue: " + angka);

    angka.offer("D");
    angka.remove("A");
    angka.remove("B");
    angka.offer("X");
    angka.offer("Y");
    angka.offer("Z");
    System.out.println("Queue: " + angka);
  }
} 
