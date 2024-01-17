package strategy;

import strategy.attack.MissileStrategy;
import strategy.move.WalkingStrategy;

public class Sunguard extends Robot{
    
    public Sunguard() {
        this.setName("Sunguard");
        this.setMoveStrategy(new WalkingStrategy());
        this.setAttackStrategy(new MissileStrategy());
    }
    
}
