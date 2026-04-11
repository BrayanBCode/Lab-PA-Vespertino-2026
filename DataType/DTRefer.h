//
// Created by Usuario on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_DTREFER_H
#define LAB_PA_VESPERTINO_2026_DTREFER_H
#include <string>
#include "DTFecha.h"
#include <list>
#include "../Publicacion/Publicacion.h"

using namespace std;

class DTRefer {
    string DOI;
    string titulo;
    DTFecha * fecha;
    list<string> autores;

    public:
        DTRefer(string DOI, string titulo, DTFecha * fecha, list<string> autores);
        string getDOI();
        string getTitulo();
        DTFecha getFecha();
        list<string> getAutores();

};



#endif //LAB_PA_VESPERTINO_2026_DTREFER_H
