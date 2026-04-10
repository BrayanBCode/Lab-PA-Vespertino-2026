//
// Created by Lautaro on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_PAGINA_WEB_H
#define LAB_PA_VESPERTINO_2026_PAGINA_WEB_H
#include <iostream>

using namespace std;


class Pagina_Web {
private:
    string url;
    string contenidoExtraido;
    public:
    Pagina_Web();
    Pagina_Web(string url, string contenidoExtraido);
    protected:
    bool contienePalabra(string palabra);
};



#endif //LAB_PA_VESPERTINO_2026_PAGINA_WEB_H
