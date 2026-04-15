//
// Created by Usuario on 10/4/2026.
//

#include "DTRefer.h"
#include <list>
#include <string>

using namespace std;

DTRefer::DTRefer(string doi, string titulo, DTFecha * fecha, list<Investigador *> autores){
    this->DOI = doi;
    this->titulo = titulo;
    this->fecha = fecha;
    this->autores = autores;
}

string DTRefer::getDOI() {
    return this->DOI;
}
string DTRefer::getTitulo() {
    return this->titulo;
}
DTFecha * DTRefer::getFecha() {
    return this->fecha;
}

list<string> DTRefer::getAutores() {
    list<string> nombres;
    for (auto inv : this->autores) {
        nombres.push_back(inv->getNombre());
    }
    return nombres;
}

std::ostream& operator<<(std::ostream& os, const DTRefer& p) {
    os << p.toString();
    return os;
}

string DTRefer::toString() const {

    string ret = this->DOI + "->" + this->titulo + "(" + this->fecha->toString() + ") / ";

    for (auto author : this->autores) {
        ret += author->getNombre() + ", ";
    }

    return ret;
}
