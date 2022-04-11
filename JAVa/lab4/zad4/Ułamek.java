package lab4.zad4;

public class Ułamek {
    private int x;
    private int y;

    public Ułamek(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public Ułamek dodawanie(Ułamek ulamek) {
        int sumaIloczyn = (x*ulamek.y) + (ulamek.x*y);
        int sumaMianownik = y * ulamek.y;
        Ułamek zwrot = new Ułamek(sumaIloczyn, sumaMianownik); //zakladajac ze was kosntruktor wyglada tak : new Ulamek(int x, int y);
        return zwrot;
    }

    public Ułamek odejmowanie(Ułamek ulamek) {
        int roznicaIloczyn = (x * ulamek.y) - (ulamek.x * y);
        int roznicaMianownik = y * ulamek.y;
        Ułamek zwrot = new Ułamek(roznicaIloczyn, roznicaMianownik); //zakladajac ze was kosntruktor wyglada tak : new Ulamek(int x, int y);
        return zwrot;
    }

    public Ułamek mnozenie(Ułamek ulamek) {
        int mnozIloczyn = x * ulamek.x;
        int mnozMianownik = y * ulamek.y;
        Ułamek zwrot = new Ułamek(mnozIloczyn, mnozMianownik); //zakladajac ze was kosntruktor wyglada tak : new Ulamek(int x, int y);
        return zwrot;
    }
        public Ułamek dzielenie (Ułamek ulamek){
            int dzielIloczyn = x * ulamek.y;
            int dzielMianownik = y * ulamek.x;
            Ułamek zwrot = new Ułamek(dzielIloczyn, dzielMianownik); //zakladajac ze was kosntruktor wyglada tak : new Ulamek(int x, int y);
            return zwrot;
        }

    @Override
    public String toString() {
        return "Ulamek{" +
                "x=" + x +
                ", y=" + y +
                '}';
    }
}

