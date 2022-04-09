package lab4.zad1;

import lab05.zad5.C;

public class Main {
    public static void main(String[] args) {

        Circle2D circle2D = new Circle2D();
        Circle2D circle2D1 = new Circle2D(2, 3, 4);
        System.out.println(circle2D.getArea());
        System.out.println(circle2D1.getArea());

        System.out.println("");
        System.out.println(circle2D.getPeremiter());
        System.out.println(circle2D1.getPeremiter());

    }
}
