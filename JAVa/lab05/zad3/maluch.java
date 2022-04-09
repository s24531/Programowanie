package lab05.zad3;

public class maluch extends Car{
private String rims;
    public maluch(String color, String brand) {
        super(color, brand);
    }

    public maluch(String color, String brand, String rims) {
        super(color, brand);
        this.rims = rims;
    }
}
