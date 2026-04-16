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

// Elimina todas las referencias del Investigador en cada publicacion
Investigador::~Investigador() {
    for(auto pub : this->publicaciones) {
        pub->removeReference(this);
    }
}

void Investigador::agregarPublicacion(Publicacion* pub) {
    this->publicaciones.push_back(pub);
    pub->agregarAutor(this);
}

// !!Odio esta función!! - att: brihan
list<string> Investigador::listarPublicaciones(DTFecha * desde, string palabra) {
    list<string> resultado;
    for (auto pub : publicaciones) {
        DTFecha* fechaPub = pub->getFecha();
        if (fechaPub != nullptr && desde != nullptr) {
            if (*fechaPub > *desde && pub->contienePalabra(palabra)) {
                resultado.push_back(pub->getDOI());
            }
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

void Investigador::removeReference(Publicacion* pub) {
    this->publicaciones.remove(pub);
}

string Investigador::toString() {
    // ORCID->nombre/institucion
    return this->getORCID() + "->" + this->getNombre() + "/"  + this->getInstitucion();
}
