package lab07.zad1;

public class Main {
    public static void main(String[] args) {
        Rectangle prostokat = new Rectangle(3,5);
        Circle kolo = new Circle(4);
        Square kwadrat = new Square(6);
        Triangle trojkat = new Triangle(1,2,6,4);


        Shape[] shapes = {prostokat,kolo,kwadrat,trojkat};
        for(Shape shape : shapes)
        {
            System.out.println(shape.getArea());
            System.out.println(shape.getPerimeter());
        }
    }
}
