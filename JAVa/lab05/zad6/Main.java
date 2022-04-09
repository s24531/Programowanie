package lab05.zad6;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {


        Scanner scan = new Scanner(System.in);
        Calculator calc = new Calculator();
        System.out.println("1 - potegowanie");
        System.out.println("2 - mnozenie");
        System.out.println("3 - dodawanie");
        int choice = scan.nextInt();
        switch (choice) {
            case 1 -> {
                int first = scan.nextInt();
                System.out.println(calc.calculate(first));
            }
            case 2 -> {
                int first = scan.nextInt();
                int second = scan.nextInt();
                System.out.println(calc.calculate(first, second));
            }
            case 3 -> {
                int first = scan.nextInt();
                int second = scan.nextInt();
                int third = scan.nextInt();
                System.out.println(calc.calculate(first, second, third));
            }
            case 4 -> {

            ;
            }
        }


    }
}
