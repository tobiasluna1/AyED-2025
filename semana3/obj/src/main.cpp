#include <iostream>
// #include "sensor.h"

using namespace std;

int main() {
    // Instancia un objeto de la clase Sensor
    sensor* s1 = new sensor();
    //s1->nombre = "Temp Cocina";
    //cout << s1->nombre << endl;
    s1->setNombre("Temp Cocina") 
    return 0;
}
