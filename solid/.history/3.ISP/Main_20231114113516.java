import javax.swing.text.Document;

public class Main {
    public static void main(String[] args) {
        Document document = new Document();

        // 복합기
        MultifunctionPrinter mfp = new MultifunctionPrinter();
        mfp.scan(document);
        mfp.print(document);
        mfp.fax(document);

        // 프린터기
        SimplePrinter sp = new SimplePrinter();
        sp.print(document);
        
    }
}
