//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_PUBLICACION_H
#define LAB_PA_VESPERTINO_2026_PUBLICACION_H
#include <iostream>
#include "../DataType/DTFecha.h"

using namespace std;

class Publicacion {
    private:
        string DOI;
        string Titulo;
        DTFecha * fecha{};
    public:
        Publicacion(string DOI, string Titulo, DTFecha * fecha);
        virtual ~Publicacion();
        Publicacion getDT();
        virtual bool contenerPalabra(string palabra);

};



#endif //LAB_PA_VESPERTINO_2026_PUBLICACION_H
