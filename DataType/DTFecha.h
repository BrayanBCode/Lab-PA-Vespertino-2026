//
// Created by Usuario on 10/4/2026.
//

#ifndef LAB_PA_VESPERTINO_2026_DTFECHA_H
#define LAB_PA_VESPERTINO_2026_DTFECHA_H
#include <string>

using namespace std;

class DTFecha {
    int Dia;
    int Mes;
    int Anio;

    public:
        DTFecha(int dia, int mes, int anio);
        int getDia();
        int getMes();
        int getAnio();

        bool operator>(const DTFecha& otra) const;

        string toString() const;
};



#endif //LAB_PA_VESPERTINO_2026_DTFECHA_H
