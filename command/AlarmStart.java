package command;

public class AlarmStart implements Command {
    private Alarm alarm;

    public AlarmStart(Alarm alarm) {
        this.alarm = alarm;
    }

    @Override
    public void execute() {
        alarm.start();
    }
}
