package lab07.zad1;

public class Circle extends Shape{
    private double r;

    public Circle(double r) {
        this.r = r;
    }

    @Override
    public double getArea(){
        return 2 * Math.PI * r;
    }

    @Override
    public double getPerimeter(){
        return Math.PI*r*r;
    }
}
