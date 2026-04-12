//
// Created by Lautaro on 10/4/2026.
//

#include "Pagina_Web.h"

Pagina_Web::Pagina_Web(
    string DOI,
    string Titulo,
    DTFecha * fecha,
    string url,
    string contenidoExtraido
    ) : Publicacion (DOI, Titulo, fecha) {

    this->url = url;
    this->contenidoExtraido = contenidoExtraido;
}

bool Pagina_Web::contienePalabra(string palabra) {
    if (this->contenidoExtraido.find(palabra) == string::npos) {
        return false;
    }

    return true;
}

