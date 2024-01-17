package strategy;

import strategy.attack.AttackStrategy;
import strategy.move.MoveStrategy;

public abstract class Robot {
    private String name;
    private MoveStrategy moveStrategy;
    private AttackStrategy attackStrategy;

    protected void setName(String name) {
        this.name = name;
    }

    protected void setMoveStrategy(MoveStrategy moveStrategy) {
        this.moveStrategy = moveStrategy;
    }

    protected void setAttackStrategy(AttackStrategy attackStrategy) {
        this.attackStrategy = attackStrategy;
    }

    public String getName() {
        return name;
    }

    public void move() {
        moveStrategy.move(this);
    }

    public void attack() {
        attackStrategy.attack(this);
    }
}
