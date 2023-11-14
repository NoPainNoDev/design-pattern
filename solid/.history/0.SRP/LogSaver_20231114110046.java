import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

/**
 * 로그를 파일형태로 저장하는 클래스
 */

public class LogSaver {
    public void save(String formattedMessage) {
        try (PrintWriter out = new PrintWriter(new FileWriter("log.txt", true))) {
            out.println(formattedMessage);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
