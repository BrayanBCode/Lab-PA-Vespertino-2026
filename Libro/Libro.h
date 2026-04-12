//
// Created by Usuario on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_LIBRO_H
#define LAB_PA_VESPERTINO_2026_LIBRO_H
#include <list>
#include <string>

#include "../DataType/DTFecha.h"
#include "../Publicacion/Publicacion.h"

using  namespace std;

class Libro : public Publicacion {
    public:
        bool contienePalabra(string palabra) override;
        Libro(string DOI, string Titulo, DTFecha * fecha, string editorial, list<string> palabrasDest);

    private:
        string editorial;
        list<string> palabrasDestacadas;

};



#endif //LAB_PA_VESPERTINO_2026_LIBRO_H
