package lab05.zad4;

public class Klasa {
    private String kolor;
    private String marka;
    private int rocznik;
    private double silnik;
    private String felgi;

    public Klasa(String kolor, String marka, int rocznik, double silnik, String felgi) {
        this.kolor = kolor;
        this.marka = marka;
        this.rocznik = rocznik;
        this.silnik = silnik;
        this.felgi = felgi;
    }

    @Override
    public String toString() {
        return "Klasa{" +
                "kolor='" + kolor + '\'' +
                ", marka='" + marka + '\'' +
                ", rocznik=" + rocznik +
                ", silnik='" + silnik + '\'' +
                ", felgi='" + felgi + '\'' +
                '}';
    }
}
