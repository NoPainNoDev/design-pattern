package strategy.attack;

import strategy.Robot;

public class MissileStrategy implements AttackStrategy {
    @Override
    public void attack(Robot robot) {
        System.out.println(robot.getName() + " Missile attack!");
    }
}
