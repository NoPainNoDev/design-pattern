import javax.swing.text.Document;

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
