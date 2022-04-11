package lab05.zad3;

public class polonez extends Car{
    private int age;
    public polonez(String color, String brand) { // <---- Wywoływanie kontruktora klasy nadrzędnej
        super(color,brand);
    }

    public polonez(String color, String brand, int age) {
        super(color, brand);
        this.age = age;
    }
    @Override
    void nazwaMetody(){
        super.nazwaMetody();

    }
}

