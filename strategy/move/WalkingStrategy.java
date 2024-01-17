package strategy.move;

import strategy.Robot;

public class WalkingStrategy implements MoveStrategy {
    @Override
    public void move(Robot robot) {
        System.out.println(robot.getName() + " Walking move!");
    }
}
