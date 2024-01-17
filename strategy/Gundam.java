package strategy;

import strategy.attack.MachineGunStrategy;
import strategy.move.FlyingStrategy;

public class Gundam extends Robot{
    
    public Gundam() {
        this.setName("Gundam");
        this.setMoveStrategy(new FlyingStrategy());
        this.setAttackStrategy(new MachineGunStrategy());
    }
}
