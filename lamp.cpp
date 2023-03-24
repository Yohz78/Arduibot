#include "lamp.hpp"

void Lamp::init(int pin, string id){
    this->pin=pin;
    this->id=id;
}


void Lamp::setValues(int value){
    if(value==1){
        cout<<"Allumer la lampe"<<endl;
    }else if(value==0){
        cout<<"Eteindre la lampe"<<endl;    
    }else{
        cout<<"Valeur incorrecte"<<endl;     
    }
}

string Lamp::getValues(){
    return "NADA";
}