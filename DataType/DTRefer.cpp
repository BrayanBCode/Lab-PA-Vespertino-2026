//
// Created by Usuario on 10/4/2026.
//

#include "DTRefer.h"
#include <list>
#include <string>

using namespace std;

DTRefer::DTRefer(string doi, string titulo, DTFecha* fecha){
    this->DOI = doi;
    this->titulo = titulo;
    this->fecha = fecha;

}

string getDOI(){
    return this->DOI;
}
string getTitulo()
{
    return this->titulo;
}
DTFecha* getFecha()
{
    return this->fecha;
}
list<string> getAutores(){
    for (auto autores : this->autores)
    {
        
    }
}