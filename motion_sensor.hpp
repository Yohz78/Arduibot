#pragma once

#include "capteur.hpp"

class Motion_sensor{
    private:
        Motion_sensor();
        string id;
        int pin;

    public:
        void init(int pin, string id);
        string getValues();    
};