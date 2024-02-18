import java.util.Scanner;
import java.util.*;
import java.util.InputMismatchException;
public class Day3{
    public static void main(String[] args){
        // int i = 1;
        // while(i<5){
        //     System.out.println("Hello");
        //     i++;
        // }

        Scanner input = new Scanner(System.in);

        char b = input.next().trim().charAt(0);

        if(b >= 'a' && b <= 'z'){
            System.out.println("Lowercase");
        }
        else{
            System.out.println("Upperase");
        }
        // int a = input.nextInt();
        // int b = input.nextInt();
        // int c = input.nextInt();

        // if(a > b && a>c){
        //     System.out.println("Ais the largets");
        // }
        // else if(b>a && b>c){
        //     System.out.println("B is the largest");
        // }
        // else {
        //     System.out.println("C is the largest");
        // }

    }
}