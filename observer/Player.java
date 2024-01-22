package observer;

import java.util.LinkedList;
import java.util.List;

public class Player implements Subject {
    
    private static final int MAX_HP = 100;

    private int hp;
    private List<Observer> observers = new LinkedList<Observer>();

    public Player() {
        this.hp = MAX_HP;
    }

    public void setHp(int hp) {
        this.hp = hp;
    }

    public int getHp() {
        return hp;
    }

    @Override
    public void attach(Observer observer) {
        observers.add(observer);
    }

    @Override
    public void detach(Observer observer) {
        if(observers.contains(observer)) {
            observers.remove(observer);
        }
    }

    @Override
    public void notifyObservers() {
        for(Observer observer : observers) {
            observer.update(this);
        }
    }
}
