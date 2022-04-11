package lab4.zad4;

public class Main {


    public static void main(String[] args) {
        Ułamek ulamek1 = new Ułamek(3,4);
        Ułamek ulamek2 = new Ułamek(1,2);
        System.out.println(ulamek1.dodawanie(ulamek2));
        System.out.println(ulamek1.odejmowanie(ulamek2));
        System.out.println(ulamek1.mnozenie(ulamek2));

    }
}
