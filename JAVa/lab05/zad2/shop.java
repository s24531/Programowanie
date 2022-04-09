package lab05.zad2;

public class shop {
    protected String adress;
    protected double size;


    public void getInformation(){
        System.out.printf(adress,size);
    }

    public shop(String adress, double size) { // <----- Konstruktor
        this.adress = adress;
        this.size = size;
    }

    @Override
    public String toString() { // <----- Wyświetlanie "Generate/toString()"
        return "shop{" +
                "adress='" + adress + '\'' +
                ", size=" + size +
                '}';
    }
}
