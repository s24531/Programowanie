package Lab_11.zad02;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Random rand = new Random();
        Set<Integer> komputer = new HashSet();
        Set<Integer> gracz = new HashSet();
        int cyfra;
        Scanner scanner = new Scanner(System.in);
        int n;

        while(true)
        {
            if(komputer.size()==6) break;
            cyfra = rand.nextInt(50);
            komputer.add(cyfra);
        }

        while(true){
            if(gracz.size()==6) break;

            try{
                cyfra = scanner.nextInt();
                gracz.add(cyfra);
            }
            catch(Exception e) {

            }
        }
        List<Integer> liczba = new ArrayList<>(gracz);
        for(int i=0;i<komputer.size();i++){
            n = liczba.get(i);
            if(komputer.contains(n)){
                System.out.println("Jest "+n);
            }
        }
    }
}
