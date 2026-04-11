//
// Created by Usuario on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_ARTICULO_H
#define LAB_PA_VESPERTINO_2026_ARTICULO_H
#include <string>

#include "../Publicacion/Publicacion.h"

using namespace std;


class Articulo : Publicacion{


    public:
        Articulo(string DOI, string Titulo, DTFecha * fecha, string revista, string extracto);

    private:
        string revista;
        string extracto;

    protected:
        bool contienePalabra(string palabra);
};



#endif //LAB_PA_VESPERTINO_2026_ARTICULO_H
