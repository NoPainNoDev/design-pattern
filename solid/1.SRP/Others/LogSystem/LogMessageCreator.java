/**
 * 로그 메시지 생성 클래스
 *  - 로그를 받아 단순한 문자열 로그 메시지로 변환.
 */
public class LogMessageCreator {
    public String createLogMessage(String level, String message) {
        return level + ": " + message;
    }
}