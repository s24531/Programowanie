package lab07.zad1;

public class Square extends Shape{
    private double a;

    public Square(double a) {
        this.a = a;
    }

    @Override
    public double getArea(){
        return 4*a;
    }

    @Override
    public double getPerimeter(){
        return a*a;
    }
}
