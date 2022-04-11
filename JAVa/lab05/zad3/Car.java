package lab05.zad3;

public class Car {
protected String color;
protected String brand;

    public Car(String color, String brand) {
        this.color = color;
        this.brand = brand;
    }
    void nazwaMetody(){
        System.out.println(color);
        System.out.println(brand);
    }
}
