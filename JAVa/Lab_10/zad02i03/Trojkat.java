package Lab_10.zad02i03;

public class Trojkat implements Figura,Comparable<Trojkat>{
    private int a,b,c,h;

    public Trojkat(int a, int b, int c, int h) {
        this.a = a;
        this.b = b;
        this.c = c;
        this.h = h;
    }

    @Override
    public int obliczPole() {
        return ((a+b)*h)/2;
    }

    @Override
    public int obliczObwod() {
        return a+b+c;
    }

    @Override
    public int compareTo(Trojkat o) {
        return obliczPole()-o.obliczPole();
    }
}
