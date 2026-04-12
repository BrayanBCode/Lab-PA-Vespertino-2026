//
// Created by Usuario on 10/4/2026.
//

#include "Libro.h"

Libro::Libro(string DOI, string Titulo, DTFecha *fecha, string editorial, list<string> palabarasDest) :
    Publicacion(DOI, Titulo, fecha) {
    this->editorial = editorial;
    this->palabarasDestacadas = palabarasDest;
}

bool Libro::contienePalabra(string palabra) {
    return true;
}


