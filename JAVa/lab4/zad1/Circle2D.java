package lab4.zad1;

public class Circle2D {
    private double x;
    private double y;
    private final double radius;

    public Circle2D() {
        x = 0;
        y = 0;
        radius = 1;
    }

    public Circle2D(double x, double y, int radius) {
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

    public double getArea() {

        return (Math.PI) * (radius * radius);
    }

    public double getPeremiter() {

        return 2 * (Math.PI) * radius;
    }


}
