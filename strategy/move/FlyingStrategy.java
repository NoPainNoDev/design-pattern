package strategy.move;

import strategy.Robot;

public class FlyingStrategy implements MoveStrategy{
    @Override
    public void move(Robot robot) {
        System.out.println(robot.getName() + " Flying move!");
    }
}
