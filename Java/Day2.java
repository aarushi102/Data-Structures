import java.util.Scanner;

public class Day2{
    public static void main(String[] args){
        System.out.println("Day 2 it is");

        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        for (int i = 1;i<11;i++){
            System.out.println(n + " X "+ i + " = " + n*i);
        }
    }
}