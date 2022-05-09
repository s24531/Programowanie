package lab07.zad1;

public class Triangle extends Shape{
    private double a;
    private double b;
    private  double c;
    private double h;
    public Triangle(double a, double b, double c, double h){
        if(a+b>=c && b+c>=a && c+a>=b) {
            this.a = a;
            this.b = b;
            this.c = c;
            this.h = h;
        }else System.out.println("Bledne dane");




    }



    @Override
    public double getArea(){
        return a+b+c;
    }

    @Override
    public double getPerimeter(){
        return (a*h)/2;
    }
}
