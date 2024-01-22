package observer;

public class SubUI implements Observer {

    @Override
    public void update(Player player) {
        System.out.println("[SubUI] Player's HP is " + player.getHp());
    }
}
