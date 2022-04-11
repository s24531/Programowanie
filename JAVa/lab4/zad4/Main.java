package lab4.zad4;

import java.util.Scanner;

public class Main {


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Podaj ulamki: \n");
        int x = scan.nextInt();
        int y = scan.nextInt();
        int z = scan.nextInt();
        int d = scan.nextInt();
        Ułamek ulamek1 = new Ułamek(x,y);
        Ułamek ulamek2 = new Ułamek(z,d);
        System.out.println(ulamek1.dodawanie(ulamek2));
        System.out.println(ulamek1.odejmowanie(ulamek2));
        System.out.println(ulamek1.mnozenie(ulamek2));
        System.out.println(ulamek1.dzielenie(ulamek2));

    }
}
