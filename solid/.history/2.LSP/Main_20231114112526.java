public class Main {

    public static void printArea(Shape shape) {
        System.out.println("Area: " + shape.calculateArea());
    }

    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(10, 20);
        
        // Square 클래스는 Rectangle 객체로 대체 될 수 있다.
        Shape square = new Square(10);

        System.out.println(rectangle.calculateArea());
        System.out.println(square.calculateArea());
    }
}
