//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_PUBLICACION_H
#define LAB_PA_VESPERTINO_2026_PUBLICACION_H
#include <string>
#include "../DataType/DTFecha.h"
#include "../DataType/DTRefer.h"
#include "../Investigador/Investigador.h"

using namespace std;

class Publicacion {
    protected:
        string DOI;
        string Titulo;
        DTFecha * fecha;
        list<Investigador *> autores;
    public:
        DTRefer * getDT();
        DTFecha * getFecha();
        string getDOI();

        // función abstracta
        virtual bool contienePalabra(string palabra)=0;
        virtual void agregarAutor(Investigador * autor);

        Publicacion(string DOI, string Titulo, DTFecha * fecha);

        virtual ~Publicacion();
};

#endif //LAB_PA_VESPERTINO_2026_PUBLICACION_H
