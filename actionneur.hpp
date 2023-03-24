#pragma once

#include <iostream>
#include "peripherique.hpp"

using namespace std;

class Actionneur : public Peripherique {
    private:
        int pin;
        string id;

    public:
        virtual void init()=0;
        virtual void setValues()=0;
        virtual string getValues()=0;
};