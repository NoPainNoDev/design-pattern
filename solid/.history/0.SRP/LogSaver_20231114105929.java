import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class LogSaver {
    public void save(String formattedMessage) {
        try (PrintWriter out = new PrintWriter(new FileWriter("log.txt", true))) {
            out.println(formattedMessage);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
