package lab07.zad3;

import lab07.zad3.paymentMethods.CreditCard;
import lab07.zad3.paymentMethods.PaymentMethod;
import lab07.zad3.paymentMethods.Wallet;
import lab07.zad3.products.Product;

public class VendingMachine {
    private Product[] products;
    private Product currentProduct;
    private Product paidProduct;
    private boolean waitingForPayment;

    public VendingMachine(Product[] products) {
        this.products = products;
    }

    public void chooseProduct(int code) {
        for (int i = 0; i < products.length; i++) {
            Product product = products[i];
            if (product.getCode() == code && product.getAmount() > 0) {
                currentProduct = product;
                waitingForPayment = true;
                System.out.println("Pik pik, pay for your product!");
                break;
            }
        }
    }

    public void payWithCard(CreditCard card, String pin) {
        if (card.checkPin(pin)) {
            pay(card);
        } else {
            System.out.println("Pin incorrect");
        }
    }

    public void payWithCash(Wallet wallet) {
        pay(wallet);
    }

    private void pay(PaymentMethod method) {
        if (waitingForPayment) {
            if (method.reduceFunds(currentProduct.getPrice())) {
                this.prepareProduct(currentProduct);
            } else {
                System.out.println("Transaction error");
            }
            this.currentProduct = null;
            this.waitingForPayment = false;
        }
    }

    private void prepareProduct(Product currentProduct) {
        currentProduct.setAmount(currentProduct.getAmount() - 1);
        this.paidProduct = currentProduct;
        System.out.println("Clang clang, piiik!");
    }

    public Product takeProduct() {
        if (paidProduct != null) {
            Product product = paidProduct;
            this.paidProduct = null;
            return product;
        } else {
            System.out.println("The chamber is empty");
            return null;
        }
    }
}
