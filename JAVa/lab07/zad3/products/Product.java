package lab07.zad3.products;

public abstract class Product {
    private String name;
    private double price;
    private int code;
    private int amount;

    protected Product(String name, double price, int code, int amount) {
        this.name = name;
        this.price = price;
        this.code = code;
        this.amount = amount;
    }

    public String info() {
        return "Name: " + this.name +
                ", Price: " + this.price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public int getCode() {
        return code;
    }

    public void setCode(int code) {
        this.code = code;
    }

    public int getAmount() {
        return amount;
    }

    public void setAmount(int amount) {
        this.amount = amount;
    }
}
