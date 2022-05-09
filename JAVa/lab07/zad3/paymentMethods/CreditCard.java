package lab07.zad3.paymentMethods;

public class CreditCard extends PaymentMethod {
    private String pin;

    public CreditCard(double funds, String pin) {
        super(funds);
        this.pin = pin;
    }

    public boolean checkPin(String pin) {
        return this.pin.equals(pin);
    }
}
