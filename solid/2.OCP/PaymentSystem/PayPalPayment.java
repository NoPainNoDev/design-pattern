public class PayPalPayment implements PaymentMethod{
    @Override
    public void processPayment(double amount) {
        // 실제로 페이팔로 결제하는 로직
        System.out.println("Paid by PayPal: " + amount);
    }
}
