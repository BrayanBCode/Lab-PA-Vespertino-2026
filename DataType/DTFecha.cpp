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