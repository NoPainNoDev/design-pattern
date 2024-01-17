package MultiRolePrinterSystem;
import javax.swing.text.Document;

/**
 * 복합기에게 필요한 기능들을 상속 받는다.
 */
public class MultifunctionPrinter implements Printer, Scanner, Fax{
    public void print(Document d) {
        // 인쇄 로직
    }

    public void scan(Document d) {
        // 스캔 로직
    }

    public void fax(Document d) {
        // 팩스 로직
    }
}
