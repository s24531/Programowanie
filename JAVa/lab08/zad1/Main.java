package lab08.zad1;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {


        while (true) {
            try {
                Scanner scanner = new Scanner(System.in);
                int a = scanner.nextInt(); // "0" -> 0
                int b = scanner.nextInt();
                break;


        }catch(Exception e){
            System.out.printf("Podaj jeszcze raz liczby: ");
        }
    }




    }

       void NazwaMetody() throws InvalidZnakException{
        Scanner scanner = new Scanner(System.in);
        System.out.println("podaj cyfre");
        int a = scanner.nextInt();
        if(a==1) { //+

        }
        else if(a==2){ //-

        }else {
            throw new InvalidZnakException();
        }


  }

    public int suma(int a,int b){return a+b;}


}

