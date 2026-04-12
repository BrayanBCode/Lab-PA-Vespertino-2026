//
// Created by Usuario on 10/4/2026.
//

#include "DTFecha.h"

DTFecha::DTFecha(int dia, int mes, int anio) {
    this->Dia = dia;
    this->Mes = mes;
    this->Anio = anio;
}
int DTFecha::getDia()
{
    return this->Dia;
}
int DTFecha::getMes()
{
    return this->Mes;
}
int DTFecha::getAnio()
{
    return this->Anio;
}

bool DTFecha::operator>(const DTFecha& otra) const {
    if (this->Anio > otra.Anio) return true;
    if (this->Anio < otra.Anio) return false;

    if (this->Mes > otra.Mes) return true;
    if (this->Mes < otra.Mes) return false;

    return (this->Dia > otra.Dia);
}