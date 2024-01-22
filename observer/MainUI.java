package observer;

public class MainUI implements Observer{
    @Override
    public void update(Player player) {
        System.out.println("[MainUI] Player's HP is " + player.getHp());
    }
}
