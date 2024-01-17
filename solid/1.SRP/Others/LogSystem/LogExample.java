/**
 * 사용 예제
 * 
 *  - 단일 책임 원칙을 적용하여 분리한 후 사용
 *  - 각 클래스는 자신의 책임에만 집중
 */
public class LogExample {
    public static void main(String[] args) {
        // 로그 메시지 만듦에 대한 책임
        LogMessageCreator messageCreator = new LogMessageCreator();
        String message = messageCreator.createLogMessage("INFO", "test log message");

        // 로그 형식화에 대한 책임
        LogFormatter formatter = new LogFormatter();
        String formattedMessage = formatter.format(message);

        // 로그 저장에 대한 책임
        LogSaver saver = new LogSaver();
        saver.save(formattedMessage);
    }
}
