#pragma once

#include <iostream>
#include <vector>
#include "actionneur.hpp"
#include "capteur.hpp"
#include "peripherique.hpp"

using namespace std;

class Automate{
    private:
        vector<Peripherique> peripheriques;
};