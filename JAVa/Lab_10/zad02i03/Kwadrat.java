package Lab_10.zad02i03;

public class Kwadrat implements Figura,Comparable<Kwadrat>{
    private int a;

    public Kwadrat(int a) {
        this.a = a;
    }

    @Override
    public int obliczPole() {
        return a*a;
    }

    @Override
    public int obliczObwod() {
        return 4*a;
    }

    @Override
    public int compareTo(Kwadrat o) {
        return obliczPole()-o.obliczPole();
    }
}
