package lab05.zad2;

import java.util.Arrays;

public class bakery extends shop { // <------- Wywolywanie konstruktora klasy nadrzednej
    public bakery(String adress, double size) {
        super(adress, size);
    }
    private String[] products = {"chleb", "bulka", "bagietka"};
    @Override // <------ Nadpisanie metody getInformation();
    public void getInformation() {
        System.out.printf(adress,size,products);
    }

    @Override
    public String toString() { // <----- Wyświetlanie "Generate/toString()"
        return "bakery{" +
                "products=" + Arrays.toString(products) +
                ", adress='" + adress + '\'' +
                ", size=" + size +
                '}';
    }
}
