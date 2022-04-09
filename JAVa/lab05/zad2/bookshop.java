package lab05.zad2;

import java.util.Arrays;

public class bookshop extends shop{
    public bookshop(String adress, double size) { // <---- Wywoływanie kontruktora klasy nadrzędnej
        super(adress, size);
    }

    private String[] products = {"ksiazka1", "ksiazka2", "ksiazka3"}; // <--- Tablica stringów
    @Override // <------ Nadpisanie metody getInformation
    public void getInformation() {
        System.out.printf(adress,size,products);
    }

    @Override
    public String toString() { // <----- Wyświetlanie "Generate/toString()"
        return "bookshop{" +
                "products=" + Arrays.toString(products) +
                ", adress='" + adress + '\'' +
                ", size=" + size +
                '}';
    }
}
