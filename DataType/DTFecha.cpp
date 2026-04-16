//
// Created by Usuario on 10/4/2026.
//

#include "DTFecha.h"
#include <iostream>
#include <ostream>

using namespace std;

DTFecha::DTFecha(int dia, int mes, int anio) {
    this->Dia = dia;
    this->Mes = mes;
    this->Anio = anio;
}

int DTFecha::getDia() {
    return this->Dia;
}

int DTFecha::getMes() {
    return this->Mes;
}
int DTFecha::getAnio() {
    return this->Anio;
}

string DTFecha::toString() const {
    return to_string(this->Dia) + "/" + to_string(this->Mes) + "/" + to_string(this->Anio);
}

bool DTFecha::operator<(const DTFecha& otra) const {
    if (this->Anio != otra.Anio) return this->Anio < otra.Anio;
    if (this->Mes != otra.Mes) return this->Mes < otra.Mes;
    return this->Dia < otra.Dia;
}

bool DTFecha::operator>(const DTFecha& otra) const {
    if (this->Anio != otra.Anio) return this->Anio > otra.Anio;
    if (this->Mes != otra.Mes) return this->Mes > otra.Mes;
    return this->Dia > otra.Dia;
}
