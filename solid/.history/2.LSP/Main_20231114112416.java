public class Main {

    public static void printArea(Shape shape) {
        System.out.println("Area: " + shape.calculateArea());
    }

    public static void main(String[] args) {
        Shape rectangle = new Rectangle(10, 20);
        Shape square = new Square(10);

        System.out.println(rectangle.calculateArea());
        System.out.println(square.calculateArea());
    }
}
