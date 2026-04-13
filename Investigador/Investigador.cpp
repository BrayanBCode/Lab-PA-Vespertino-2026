#include "Investigador.h"
#include <string>
#include <list>
#include "../DataType/DTFecha.h"
#include "../Publicacion/Publicacion.h"

using namespace std;

Investigador::Investigador(
    string orcid,
    string nombreI,
    string Institucion) {
    this-> ORCID = orcid;
    this -> nombre = nombreI;
    this-> Institucion = Institucion;
}

Investigador::~Investigador(){}

void Investigador::agregarPublicacion(Publicacion* pub) {
    this->publicaciones.push_back(pub);
    pub->agregarAutor(this);
}

list<string> Investigador::listarPublicaciones(DTFecha * desde, string palabra) {
    list<string> resultado;
    for (auto pub : publicaciones) {
        if (pub->getFecha() > desde && pub->contienePalabra(palabra)) {
            resultado.push_back(pub->getDOI());
        }
    }
    return resultado;
}

string Investigador::getNombre() {
    return this->nombre;
}

string Investigador::getORCID() {
	return this->ORCID;
}

string Investigador::getInstitucion() {
    return this->Institucion;
}

list<Publicacion *> Investigador::getPublicaciones() {
    return this->publicaciones;
}