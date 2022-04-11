package lab05.zad3;
import com.sun.source.tree.SynchronizedTree;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        polonez polonez = new polonez("red", "polonez", 1999);
        maluch maluch = new maluch("black", "maluch", "bbs");
        fiat fiat = new fiat("green", "fiat", 4.2);
        List<Car> nazwa = new ArrayList<Car>();

        nazwa.add(polonez);
        nazwa.add(maluch);
        nazwa.add(fiat);

//        @Override
//        String toString() {
//         return super.toString() + "Tu oczywiscie kolejne zmienne jakie maja zostac wyswietlone przy wywolywaniu ";
//        }
        for(Car x : nazwa){
            x.nazwaMetody();
        }
    }
}
