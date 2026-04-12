//
// Created by Usuario on 10/4/2026.
//

#include "Articulo.h"

Articulo::Articulo(
    string DOI,
    string Titulo,
    DTFecha * fecha,
    string revista,
    string extracto
    ) : Publicacion(DOI, Titulo, fecha) {

    this->revista = revista;
    this->extracto = extracto;
}

bool Articulo::contienePalabra(string palabra) {
    return true;
}
