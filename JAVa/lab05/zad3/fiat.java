package lab05.zad3;

public class fiat extends Car{
private double engine;

public fiat(String color, String brand) {
        super(color, brand);
    }

    public fiat(String color, String brand, double engine) {
        super(color, brand);
        this.engine = engine;
    }
    @Override
    void nazwaMetody(){
        super.nazwaMetody();

    }
}

