public class Square extends Rectangle {
    public Square(double size) {
        super(size, size);
    }

    @Override
    public void setWidth(double width) {
        this.width = this.height = width;
    }

    @Override
    public void setHeight(double height) {
        this.width = this.height = height;
    }
}
