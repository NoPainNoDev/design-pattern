package command;

public class CommandPattern {
    public static void main(String[] args) {
        Lamp lamp = new Lamp();
        Button button = new Button();
        button.setCommand(new LampOn(lamp));
        button.pressed();
    }
}
