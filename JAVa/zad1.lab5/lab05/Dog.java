package pjatk.lab05;

public class Dog extends Animal{
    public Dog(String name, String color) {
        super(name, color);
    }

    public void makesSound(){
        System.out.printf("[%s:%s] Hau Hau\n", name, color);
    }

}
