package command;

public class Button {
    private Command command;

    public void setCommand(Command newCommand) {
        this.command = newCommand;
    }

    public void pressed() {
        command.execute();
    }
}
