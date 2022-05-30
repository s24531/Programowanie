package lab11.zad3;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class Main {
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            String tekst = scanner.nextLine();
            System.out.println(zliczWystapieniaSlow(tekst));
        }

        public static Map<String, Integer> zliczWystapieniaSlow(String tekst){
            String[] slowa = tekst.split(" ");
            Map<String, Integer> mapaSlow = new TreeMap<>();

            for (String slowo:slowa){
                if (mapaSlow.containsKey(slowo)){
                    int ilosc = mapaSlow.get(slowo);
                    mapaSlow.put(slowo, ++ilosc);
                }else {
                    mapaSlow.put(slowo, 1);
                }
            }
            return mapaSlow;
        }
    }

