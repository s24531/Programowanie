package lab07.zad3.paymentMethods;

public abstract class PaymentMethod {
    private double funds;

    protected PaymentMethod(double funds) {
        this.funds = funds;
    }

    public boolean reduceFunds(double funds) {
        if(this.funds - funds < 0) {
            return false;
        } else {
            this.funds-=funds;
            return true;
        }
    }

    public double getFunds() {
        return funds;
    }

    public void setFunds(double funds) {
        this.funds = funds;
    }
}
