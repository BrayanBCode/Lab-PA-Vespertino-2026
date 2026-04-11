//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_PUBLICACION_H
#define LAB_PA_VESPERTINO_2026_PUBLICACION_H
#include <string>
#include "../DataType/DTFecha.h"
#include "../DataType/DTRefer.h"

using namespace std;

class Publicacion {
    private:
        string DOI;
        string Titulo;
        DTFecha * fecha{};
    public:
        Publicacion(string DOI, string Titulo, DTFecha * fecha);
        virtual ~Publicacion();
        DTRefer getDT();
        virtual bool contenerPalabra(string palabra)=0;
        DTFecha getFecha();
        string getDOI();
        void Publicacion::agregarAutor(string nombre);
};



#endif //LAB_PA_VESPERTINO_2026_PUBLICACION_H
