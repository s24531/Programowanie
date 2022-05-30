package lab11.zad8;
import java.util.Arrays;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;
public class Main {
    public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            String tekst = scanner.nextLine();
            System.out.println(zliczUnikatoweZnaki(tekst));
        }

        public static int zliczUnikatoweZnaki(String tekst){
            String[] literki = tekst.split("");
            Set<String> unikatoweLiterki = new TreeSet<>();
            unikatoweLiterki.addAll(Arrays.asList(literki));
            return unikatoweLiterki.size();
        }
    }

