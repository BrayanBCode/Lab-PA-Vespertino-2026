//
// Created by Usuario on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_DTREFER_H
#define LAB_PA_VESPERTINO_2026_DTREFER_H
#include <string>
#include "DTFecha.h"
#include <list>

#include "../Investigador/Investigador.h"

using namespace std;

class DTRefer {
    string DOI;
    string titulo;
    DTFecha * fecha;
    list<Investigador *> autores;

    public:

        friend ostream& operator<<(ostream& os, const DTRefer& p);
        DTRefer(string DOI, string titulo, DTFecha * fecha, list<Investigador *> autores);
        string getDOI();
        string getTitulo();
        DTFecha * getFecha();
        list<string> getAutores();

        string toString() const;

};



#endif //LAB_PA_VESPERTINO_2026_DTREFER_H
