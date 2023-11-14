import javax.swing.text.Document;

public class Main {
    public static void main(String[] args) {
        Document document = new Document();

        MultifunctionPrinter mfp = new MultifunctionPrinter();
        mfp.scan(document);
        mfp.print(document);
        mfp.fax(document);


    }
}
