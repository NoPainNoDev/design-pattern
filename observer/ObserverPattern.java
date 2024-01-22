package observer;

public class ObserverPattern {
    public static void main(String[] args) {
        Player player = new Player();
        
        MainUI mainUI = new MainUI();
        SubUI subUI = new SubUI();
        player.attach(mainUI);
        player.attach(subUI);
        
        int monsterAttackDamage = 10;
        player.setHp(player.getHp() - monsterAttackDamage);
        player.notifyObservers();
    }
}
