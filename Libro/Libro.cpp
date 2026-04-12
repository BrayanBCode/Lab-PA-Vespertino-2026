//
// Created by Usuario on 10/4/2026.
//

#include "Libro.h"

Libro::Libro(string DOI, string Titulo, DTFecha *fecha, string editorial, list<string> palabrasDest) :
    Publicacion(DOI, Titulo, fecha) {
    this->editorial = editorial;
    this->palabrasDestacadas = palabrasDest;
}

bool Libro::contienePalabra(string palabra) {
    for (auto word : this->palabrasDestacadas) {
        if (word == palabra) return true;
    }

    return false;
}


