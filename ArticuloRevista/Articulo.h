//
// Created by Usuario on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_ARTICULO_H
#define LAB_PA_VESPERTINO_2026_ARTICULO_H
#include <string>

#include "../Publicacion/Publicacion.h"

using namespace std;


class Articulo : public Publicacion {


    public:
        Articulo(string DOI, string Titulo, DTFecha * fecha, string revista, string extracto);
        bool contienePalabra(string palabra) override;

    private:
        string revista;
        string extracto;



};



#endif //LAB_PA_VESPERTINO_2026_ARTICULO_H
