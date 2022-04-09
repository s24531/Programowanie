package race;

import java.util.Random;

public class Zawodnik {

    private int predkoscMin;
    private int predkoscMax;
    protected double pokonanaOdleglosc;
    private String imie;
    private int odleglosc;

    public Zawodnik(int predkoscMin, int predkoscMax, String imie) {
        this.predkoscMin = predkoscMin;
        this.predkoscMax = predkoscMax;
        this.pokonanaOdleglosc = 0;
        this.imie = imie;
    }

    public void przedstawSie() {
        System.out.printf(" Jestem " + imie + " biegam z predkoscia " + predkoscMin + "km/h" + " - " + predkoscMax + "km/h" + "\n");
    }

    public void biegnij() {
        for(pokonanaOdleglosc=0; pokonanaOdleglosc<=50; pokonanaOdleglosc++){
        Random random = new Random();
        int x = random.nextInt(predkoscMax + 1 - predkoscMin) + predkoscMin;
        pokonanaOdleglosc += x;
        }
    }

    @Override
    public String toString() {
        return "Zawodnik{" +
                "predkoscMin=" + predkoscMin +
                ", predkoscMax=" + predkoscMax +
                ", pokonanaOdleglosc=" + pokonanaOdleglosc +
                ", imie='" + imie + '\'' +
                '}';
    }
}