package lab11.zad4;
import java.util.*;
public class Main {
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            String tekst = scanner.nextLine();
            System.out.println(skorowidzLiterowy(tekst));
        }

        public static Map<String, Set<Integer>> skorowidzLiterowy(String tekst){
            String[] litery = tekst.split("");
            Map<String, Set<Integer>> skorowidz = new TreeMap<>();

            for (int i=0; i<litery.length; i++){
                if (skorowidz.containsKey(litery[i])){
                    Set<Integer> indeksy = skorowidz.get(litery[i]);
                    indeksy.add(i);
                }else {
                    skorowidz.put(litery[i], new TreeSet<>(Arrays.asList(i)));
                }
            }
            return skorowidz;

        }
    }

