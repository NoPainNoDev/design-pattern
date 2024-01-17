package state;

public class LightOff implements LightState {
    private static LightOff instance;

    private LightOff() {}

    public synchronized static LightOff getInstance() {
        if (instance == null) {
            instance = new LightOff();
        }
        return instance;
    }

    @Override
    public void turnOff(Light light) {
        System.out.println(light.getName() + " is already off.");
    }

    @Override
    public void turnOn(Light light) {
        System.out.println(light.getName() + " is turned on.");
        light.setState(LightOn.getInstance());
    }
}
