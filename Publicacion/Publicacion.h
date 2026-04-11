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
    protected:
        string DOI;
        string Titulo;
        DTFecha * fecha{};
    public:
        DTRefer getDT();
        DTFecha getFecha();
        string getDOI();

        // Inicializa la funcion como vacia para evitar implementarla
        virtual bool contenerPalabra(string palabra)=0;
        void agregarAutor(string nombre);

        Publicacion(string DOI, string Titulo, DTFecha * fecha);
        virtual ~Publicacion();
};



#endif //LAB_PA_VESPERTINO_2026_PUBLICACION_H
