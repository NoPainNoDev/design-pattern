package MessageTransferSystem;
public class EmailSender implements MessageSender{
    @Override
    public void send(String message) {
        // 이메일 전송 로직
        System.out.println("Sending email: " + message);
    }
}
