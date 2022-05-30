package Lab_11.zad01;

import java.util.HashSet;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        int [] liczby =  new int[]{1,2,2,4,4,5,1,4,4};
        Duplikaty(liczby);
    }

    static void Duplikaty(int [] liczby){
        Set<Integer> x = new HashSet();
        for(int i=0;i<liczby.length;i++){
            for(int j=i+1;j<liczby.length;j++){
                if(liczby[i]==liczby[j]){
                    x.add(liczby[j]);
                }
            }
        }
        for (int k : x){
            System.out.println(k);
        }
    }
}
