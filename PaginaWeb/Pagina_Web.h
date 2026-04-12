//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_PAGINA_WEB_H
#define LAB_PA_VESPERTINO_2026_PAGINA_WEB_H
#include <string>
#include "../Publicacion/Publicacion.h"

using namespace std;


class Pagina_Web : Publicacion {
    public:
        Pagina_Web(string DOI, string Titulo, DTFecha * fecha, string url, string contenidoExtraido);
        bool contienePalabra(string palabra) override;

    private:
        string url;
        string contenidoExtraido;

};



#endif //LAB_PA_VESPERTINO_2026_PAGINA_WEB_H
