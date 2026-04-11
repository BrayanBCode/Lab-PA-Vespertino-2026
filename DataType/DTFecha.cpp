//
// Created by Usuario on 10/4/2026.
//

#include "DTFecha.h"

DTFecha::DTFecha(int dia, int mes, int anio) {
    this->Dia = dia;
    this->Mes = mes;
    this->Anio = anio;
}
int getDia()
{
    return this->dia;
}
int getMes()
{
    return this->mes;
}
int getAño()
{
    return this->Anio;
}