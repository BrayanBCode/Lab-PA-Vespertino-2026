//
// Created by Lucas on 10/4/2026.
//

#include "Publicacion.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;


Publicacion::Publicacion(string DOI, string Titulo, DTFecha * fecha) {
    this->DOI = DOI;
    this->Titulo = Titulo;
    this->fecha = fecha;
}

Publicacion::~Publicacion()
{


}
