package state;

public class Light {
    private String name;
    private LightState state;

    public Light(String name) {
        this.name = name;
        this.setState(LightOff.getInstance());
    }

    public void setState(LightState state) {
        this.state = state;
    }

    public String getName() {
        return name;
    }

    public void turnOn() {
        this.state.turnOn(this);
    }

    public void turnOff() {
        this.state.turnOff(this);
    }
}
