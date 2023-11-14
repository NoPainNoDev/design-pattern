public class CreditCardPayment implements PaymentMethod{
    @Override
    public void processPayment(double amount) {
        // 실제로 신용카드로 결제하는 로직
        System.out.println("Paid by credit card: " + amount);
    }
}
