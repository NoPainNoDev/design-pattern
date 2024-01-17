public class Main {
    public static void main(String[] args) {
        PaymentMethod creditCard = new CreditCardPayment();
        PaymentMethod payPal = new PayPalPayment();

        PaymentProcessor processor = new PaymentProcessor(creditCard);
        processor.process(100.0);

        processor = new PaymentProcessor(payPal);
        processor.process(200.0);
    }
}
