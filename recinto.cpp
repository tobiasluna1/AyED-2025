#include "Recinto.h"
#include <iostream>

Recinto::Recinto(std::string nombre, int nSensores){
    this->nombre = nombre;
    this->nSensores = nSensores;
    this->sensores = new Sensor*[nSensores];
    for(int i=0; i<nSensores; i++) {
        this->sensores[i] = nullptr;
    }
}

Recinto::~Recinto(){
    delete[] sensores;
}

std::string Recinto::getNombre(){
    return nombre;
}

int Recinto::getCantSensores(){
    return nSensores;
}

void Recinto::setNombre(std::string nombreNuevo){
    this->nombre = nombreNuevo;
}

// ------------------ RECURSIVOS ------------------

float Recinto::_suma(Sensor** v, int n, std::string unidad){
    //TODO
    if (n == this->nSensores) return 0.0;
    else {
        if (v[n] != nullptr && v[n]->getUnidad() == unidad)
            return _suma(v, n+1, unidad) + v[n]->getValor();
        else
            return _suma(v, m+1, unidad);
    }
}

int Recinto::_maximo(Sensor** v, int n, std::string unidad, int mejorPos){
    //TODO    
    if(n==this->nSensores) return mejorPos;
    else{
        if(v[n]!=nullptr && v[n]->getnidad()==unidad){
            if(mejorPos == -1 || v[mejorPos]->getValor() <= v[n]->getValor()){
                mejorPos = n;
            }
        }
    }
}

int Recinto::_buscar(Sensor** v, int n, const std::string& key){
    //TODO
    
}

Sensor* Recinto::_getSensor(Sensor** v, int n, int posBuscada){
    //TODO   
    if (n==nSensores) {
        return v[n];
    } else {
        if (n==posBuscada) {
            return v[n];
        } else {
            return _getSensor(v,n+1, posBuscada);
        }
    }
}
