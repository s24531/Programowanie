package lab05.zad2;


public class Main {
    public static void main(String[] args) {
        shop uAntka = new shop("Wiejska",25.5);
        bakery uMisia = new bakery("Brzegi",28.5);
        bookshop uMalisia = new bookshop("Satrocin",29.5);

        System.out.println(uAntka);
        System.out.println(uMisia);
        System.out.println(uMalisia);
    }
}