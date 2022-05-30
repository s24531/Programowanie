package Lab_10.zad02i03;

public class Main {
    public static void main(String[] args) {
        Kwadrat kwadrat = new Kwadrat(4);
        Prostokat prostokat = new Prostokat(5,6);
        Trojkat trojkat = new Trojkat(6,7,8,5);

        Figura[] shapes = {kwadrat,prostokat,trojkat};
        for(Figura shape : shapes)
        {
            System.out.println(shape.obliczPole());
            //System.out.println(shape.obliczObwod());
        }
    }
}
