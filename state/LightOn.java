package state;

public class LightOn implements LightState {
    private static LightOn instance;

    private LightOn() {}

    public synchronized static LightOn getInstance() {
        if (instance == null) {
            instance = new LightOn();
        }
        return instance;
    }

    @Override
    public void turnOff(Light light) {
        System.out.println(light.getName() + " is turned off.");
        light.setState(LightOff.getInstance());
    }

    @Override
    public void turnOn(Light light) {
        System.out.println(light.getName() + " is already on.");
    }
}
