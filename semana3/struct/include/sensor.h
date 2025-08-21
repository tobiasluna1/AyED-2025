#ifndef SENSOR_H
#define SENSOR_H

#include <string>
struct Sensor {
  std::string sensor;
  float valor;
  std::string unidad;
};
// Declarar un struct Sensor que tenga un nombre (string), valor (flotante) y unidad (string

// Prototipos
void imprimir(const Sensor* lista, int n);
int cargarDesdeArchivo(const std::string& ruta, Sensor* lista, int n);

#endif
