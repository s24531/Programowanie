package lab07.zad1;

public class Rectangle extends Shape{
    private double a;
    private double b;

    public Rectangle(double a, double b){
        this.a=a;
        this.b=b;
    }

    @Override
    public double getArea(){
        return (2*a)+(2*b);
    }
    @Override
    public double getPerimeter(){
        return a*b;
    }


}
