package com.github.bsferreira.solid.lsp.violation;

/**
 * Created by bsferreira on 16-04-2016.
 */
public class Car extends Vehicle {

    // Car는 Vehicle로 대체할 수 없음
    // changeGear를 할 수 없기 때문에 
    @Override
    public void changeGear(Gear gear) {
        if(Gear.R.equals(gear) && getGear().equals(Gear.D)){
            throw new RuntimeException("Can't change to REVERSE gear when " + getGear().toString() + " gear is engaged!");
        }
    }
}
