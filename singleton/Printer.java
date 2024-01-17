package singleton;

import java.util.Objects;

public class Printer {
    private static Printer printer = null;
    
    private static final int INK_MAX = 100;
    private int inkAmount = 0;

    private Printer() {
    }

    public synchronized static Printer getInstance() {
        if(Objects.isNull(printer)) {
            printer = new Printer();
        }
        return printer;
    }

    public synchronized void chargeInt(int amount) {
        if(amount < 0) {
            System.out.println("잘못된 충전량입니다.");
            return;
        }

        if(inkAmount + amount > INK_MAX) {
            System.out.println("잉크가 가득 찼습니다.");
            return;
        } 

        inkAmount += amount;
    }

    public synchronized void print(String str) {
        if(inkAmount <= 0) {
            System.out.println("잉크가 부족합니다.");
            return;
        }

        inkAmount -= 1;
        System.out.println(str + " 출력했습니다.");
    }
}
