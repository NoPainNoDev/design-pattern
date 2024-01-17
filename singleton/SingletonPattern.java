package singleton;

public class SingletonPattern {
    public static void main(String[] args) {
        Printer.getInstance().chargeInt(100);
        Printer.getInstance().print("Hello World!");
    }
}
