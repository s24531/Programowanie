package Lab_10.zad02i03;

public class Prostokat implements Figura,Comparable<Prostokat>{
    private int a,b;

    public Prostokat(int a, int b) {
        this.a = a;
        this.b = b;
    }

    @Override
    public int obliczPole() {
        return a*b;
    }

    @Override
    public int obliczObwod() {
        return (2*a)+(2*b);
    }

    @Override
    public int compareTo(Prostokat o) {
        return obliczPole()-o.obliczPole();
    }
}
