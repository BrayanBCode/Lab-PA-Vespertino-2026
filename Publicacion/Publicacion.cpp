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

Publicacion::~Publicacion(){

}

string getDOI(){
    return this->DOI;
}

DTFecha * getFecha(){
    return this->fecha;
}

DTRefer Publicacion::getDT() {
    return DTRefer(DOI, Titulo, fecha, autores);
}
void Publicacion::agregarAutor(string nombre) {
    autores.insert(nombre);
}
