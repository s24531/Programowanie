package lab07.zad3;

import lab07.zad3.paymentMethods.CreditCard;
import lab07.zad3.products.Drink;
import lab07.zad3.products.Product;

public class Main {

    public static void main(String[] args) {
        CreditCard card = new CreditCard(300, "1234");
        Drink fanta = new Drink("Fanta", 3.50, 12, 3, true);
        Product[] products = {fanta};
	    VendingMachine vendingMachine = new VendingMachine(products);

        vendingMachine.chooseProduct(12);
        vendingMachine.payWithCard(card, "1234");
        Product product = vendingMachine.takeProduct();

        if(product != null)
        System.out.println(product.info());
        System.out.println(card.getFunds());
    }
}
