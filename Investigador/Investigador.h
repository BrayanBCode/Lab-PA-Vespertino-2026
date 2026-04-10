//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
#define LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
#include <iostream>
#include <string>
#include <list>

using namespace std;


class Investigador {
    private:
    string ORCID;
    string nombre;
    string institucion;
public:
    string toString();
    list <string> listarPublicaciones(DTFecha desde, string palabra);
};



#endif //LAB_PA_VESPERTINO_2026_INVESTIGADOR_H
