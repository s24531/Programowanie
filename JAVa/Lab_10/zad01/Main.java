package Lab_10.zad01;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String pattern = scanner.nextLine();

        LocalDate date = LocalDate.of(2020, 5, 4);
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern(pattern);
        String formattedDate= date.format(formatter); // 04-05-2020

        System.out.println(formattedDate);
    }
}