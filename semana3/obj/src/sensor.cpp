#include "sensor.h"
#include <iostream>
#include <fstream>
#include <iomanip>

Sensor::Sensor(){
    
}

std::string Sensor(std::string nombre, float valor, std::string unidad) {
    this->nombre = nombre;    
    this->valor = valor;
    this->unidad = unidad;
}
