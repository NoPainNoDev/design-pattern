package MessageTransferSystem;
public class Main {
    public static void main(String[] args) {
        MessageSender emailSender = new EmailSender();
        MessageService emailService = new MessageService(emailSender);
        emailService.send("Hello via Email");

        MessageSender smsSender = new SmsSender();
        MessageService smsService = new MessageService(smsSender);
        smsService.send("Hello via SMS");
    }
}
