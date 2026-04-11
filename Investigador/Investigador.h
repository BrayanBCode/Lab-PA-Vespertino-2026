//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
#define LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
#include <string>
#include <list>
#include <set>
#include "../DataType/DTFecha.h"
#include "../Publicacion/Publicacion.h"

using namespace std;

class Investigador
{
public:
    Investigador(string orcid , string nombreI , string Institucion);
    ~Investigador();
    string toString();
    list <string> listarPublicaciones(DTFecha desde, string palabra);
    void agregarPublicacion(Publicacion* pub);

private:
    string ORCID;
    string nombre;
    string Institucion;
    set<Publicacion*> publicaciones;
};
#endif //LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
