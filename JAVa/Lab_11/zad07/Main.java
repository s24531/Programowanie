package Lab_11.zad07;

import java.util.ArrayList;
public class Main {


    public static void main(String[] args) {

        ArrayList<String> s = new ArrayList<String>();
        String a = "witaj";
        String b = "wita";
        String c = "wit";
        String d = "wi";
        String f = "w";
        s.add(a);
        s.add(b);
        s.add(c);
        s.add(d);
        s.add(f);
        zadanie7(s);
    }

    public static void zadanie7(ArrayList<String> o) {
        String nowe;
        ArrayList<String> result = new ArrayList<String>();
        for (int i = 0; i < o.size(); i++) {

            nowe = o.get(i);
            if (nowe.length() % 2 == 0) {
                result.add(nowe);
            }
        }
        for (int i = 0; i < result.size(); i++)
        {
            System.out.println(result.get(i));
        }
    }


}
