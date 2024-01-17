/**
 * 로그를 형식화하는 클래스
 */
public class LogFormatter {
    public String format(String message) {
        // 단순한 문자열 예시
        // 실제는 JSON 형식화 등의 복잡한 로직이 들어갈 수 있음
        return "{ 'log': '" + message + "' }";
    }
}
