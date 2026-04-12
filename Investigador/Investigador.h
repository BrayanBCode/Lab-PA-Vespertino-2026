//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
#define LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
#include <string>
#include <list>
#include "../DataType/DTFecha.h"

using namespace std;

// Utilizo esta clase para que no salte error en .h / en .cpp se importara Publicacion para que funcione su logica
class Publicacion;

class Investigador
{
public:
    string toString();
    list <string> listarPublicaciones(DTFecha * desde, string palabra);

    void agregarPublicacion(Publicacion* pub);

    Investigador(string orcid, string nombre, string Institucion);
    ~Investigador();

private:
    string ORCID;
    string nombre;
    string Institucion;
    list<Publicacion*> publicaciones;

};
#endif //LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
