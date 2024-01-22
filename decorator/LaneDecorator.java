package decorator;

// 차선 표시를 추가하는 클래스
public class LaneDecorator extends DisplayDecorator {
    public LaneDecorator(Display decoratedDisplay) {
        super(decoratedDisplay);
    }

    public void draw() {
        super.draw(); // 기존 표시 기능을 수행
        drawLane();
    }

    private void drawLane() {
        System.out.println("\t차선 표시");
    }
}
