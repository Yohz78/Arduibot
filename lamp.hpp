#pragma once

#include <iostream>
#include "actionneur.hpp"

using namespace std;

class Lamp : public Actionneur {
    private:
        Lamp();
        int pin=0;
        string id;

    public:
        void init(int pin, string id);    
        void setValues(int value);
        string getValues();
};