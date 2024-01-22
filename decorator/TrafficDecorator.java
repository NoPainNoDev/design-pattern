package decorator;

// 교통량 표시를 추가하는 클래스
public class TrafficDecorator extends DisplayDecorator {
    public TrafficDecorator(Display decoratedDisplay) {
        super(decoratedDisplay);
    }

    public void draw() {
        super.draw(); // 기존 표시 기능을 수행
        drawTraffic();
    }

    private void drawTraffic() {
        System.out.println("\t교통량 표시");
    }
}
