public class SmsSender implements MessageSender{
    @Override
    public void send(String message) {
        // SMS 전송 로직
        System.out.println("Sending SMS: " + message);
    }
}
