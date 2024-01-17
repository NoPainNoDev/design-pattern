package strategy.attack;

import strategy.Robot;

public class MachinegunStrategy implements AttackStrategy{

    @Override
    public void attack(Robot robot) {
        System.out.println(robot.getName() + " Machinegun attack!");
    }
}
