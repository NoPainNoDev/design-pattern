package strategy;

public class StrategyPattern {
    public static void main(String[] args) {
        Robot gundam = new Gundam();
        Robot sunguard = new Sunguard();
        
        gundam.attack();
        gundam.move();
        
        sunguard.attack();
        sunguard.move();
    }
}
