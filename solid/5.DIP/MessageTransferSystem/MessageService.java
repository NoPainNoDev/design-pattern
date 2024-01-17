package MessageTransferSystem;
public class MessageService {
    private MessageSender sender;

    public MessageService(MessageSender sender) {
        this.sender = sender;
    }

    public void send(String message) {
        sender.send(message);
    }
}
