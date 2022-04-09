package race;

public class Wyscig {
    public static void main(String[] args) {
        psvm();

    }

    private static void psvm() {
        Zawodnik stach = new Zawodnik(5, 10, "Stach");
        Zawodnik zenon = new Zawodnik(3, 12, "Zenon");
        Zawodnik zbychu = new Zawodnik(4, 11, "Zbychu");
        stach.przedstawSie();
        zenon.przedstawSie();
        zbychu.przedstawSie();
            stach.biegnij();
            zenon.biegnij();
            zbychu.biegnij();

            if(stach.pokonanaOdleglosc>zenon.pokonanaOdleglosc && stach.pokonanaOdleglosc>zbychu.pokonanaOdleglosc ){
                System.out.println("Zwyciezca jest "+stach);
                }
            if(zenon.pokonanaOdleglosc>zbychu.pokonanaOdleglosc && zenon.pokonanaOdleglosc>stach.pokonanaOdleglosc ){
                System.out.println("Zwyciezca jest "+zenon);
        }

            if(zbychu.pokonanaOdleglosc>stach.pokonanaOdleglosc && zbychu.pokonanaOdleglosc>zenon.pokonanaOdleglosc ){
                System.out.println("Zwyciezca jest "+zbychu);
        }

      }

    }



