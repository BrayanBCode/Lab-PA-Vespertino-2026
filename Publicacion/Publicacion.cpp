//
// Created by Lucas on 10/4/2026.
//

#include <iostream>
#include <list>
#include <string>

#include "../Publicacion/Publicacion.h"
using namespace std;



Publicacion::Publicacion(string DOI, string Titulo, DTFecha * fecha) {
    this->DOI = DOI;
    this->Titulo = Titulo;
    this->fecha = fecha;
}

Publicacion::~Publicacion() {
    //Por lo que vi los otros atributos si eliminas la publicacion ya se pierden debido a que son std, no se si es correcto.
    if (fecha != nullptr) {
        delete fecha;
        fecha = nullptr;
    }


}

string Publicacion::getDOI() {
    return this->DOI;
}

DTFecha * Publicacion::getFecha() {
    return this->fecha;
}

DTRefer * Publicacion::getDT() {
    return new DTRefer(this->DOI, this->Titulo, this->fecha, this->autores);
}

void Publicacion::agregarAutor(Investigador * autor) {
    this->autores.push_back(autor);
}
