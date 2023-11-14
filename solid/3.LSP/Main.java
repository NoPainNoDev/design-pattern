public class Main {

    public static void printArea(Shape shape) {
        System.out.println("Area: " + shape.calculateArea());
    }

    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(10, 20);
        
        // Square는 Rectangle의 기본 행위를 변경하지 않는다.
        // 자식 Square 클래스는 부모 Rectangle 객체로 대체 될 수 있다.
        Shape square = new Square(10);

        printArea(rectangle);
        printArea(square);
    }
}
