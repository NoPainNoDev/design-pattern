package decorator;

public class DecoratorPattern {
    public static void main(String[] args) {
        // 기본 도로 표시
        Display road = new RoadDisplay();
        road.draw();

        // 기본 도로 표시 + 차선 표시
        Display roadWithLane = new LaneDecorator(new RoadDisplay());
        roadWithLane.draw();

        // 기본 도로 표시 + 교통량 표시
        Display roadWithTraffic = new TrafficDecorator(new RoadDisplay());
        roadWithTraffic.draw();

        // 기본 도로 표시 + 교통량 표시 + 차선 표시
        Display roadWithTrafficAndLane = new LaneDecorator(new TrafficDecorator(new RoadDisplay()));
        roadWithTrafficAndLane.draw();
    }
}
