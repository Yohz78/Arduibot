#pragma once

#include <iostream>

using namespace std;

class Peripherique{
    private:
        string id;
    public:
        virtual void init()=0;
};