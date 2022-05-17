package zad01;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Podaj format daty: ");
        String data = scanner.nextLine();

        Date date = new Date();
        SimpleDateFormat formatter = new SimpleDateFormat(data);
        String strDate= formatter.format(date); // 04-05-2020
        System.out.println(strDate);
    }
}
