#include "motion_sensor.hpp"

void Motion_sensor::init(int pin, string id){
    this->pin=pin;
    this->id=id;
}

string Motion_sensor::getValues(){
    return "NADA";
}