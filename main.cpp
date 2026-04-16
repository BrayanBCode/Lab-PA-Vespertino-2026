#include <iostream>

#include "Investigador/Investigador.h"
#include "ArticuloRevista/Articulo.h"
#include "Libro/Libro.h"
#include "PaginaWeb/Pagina_Web.h"


using namespace std;

int main() {
    auto * art1 = new Articulo(
        "10.1234/abc123",
        "Fundamentos de POO",
        new DTFecha(15, 5, 2023),
        "Programación Avanzada",
        "Introduccion a los principios fundamentales de la programacion orientada a objetos, explicando sus conceptos clave como clases, objetos, herencia y polimorfismo.");

    auto * art2 = new Articulo(
        "10.4567/jkl012",
        "Utilidad de diagramas UML",
        new DTFecha(10, 2, 2024),
        "Modelado de Software",
        "Ejercicio empirico de como los diagramas UML pueden ayudar en el proceso y documentación de software, cubriendo los tipos mas importantes utilizados, como clases.");

    list<string> keyWords;
    keyWords.push_back("Diseno");
    keyWords.push_back("OOP");
    keyWords.push_back("Class");
    auto * lib1 = new Libro(
        "10.2345/def456",
        "Patrones de Diseno en c++",
        new DTFecha(20, 8, 2022),
        "Software Design",
        keyWords);

    // Reutilizo la lista, ya que el constructor genera una copia del objeto list
    keyWords.clear();

    keyWords.push_back("Diagramas");
    keyWords.push_back("UML");
    keyWords.push_back("Software");
    keyWords.push_back("Modelado");
    auto * lib2 = new Libro(
        "10.5678/mno345",
        "Guia de UML",
        new DTFecha(20, 8, 2022),
        "IEEE",
        keyWords);

    auto * pag1 = new Pagina_Web(
        "10.3456/ghi789",
        "Diagramas para Principiante",
        new DTFecha(20, 10, 2024), "www.umlparaprincipiantes.com",
        "En esta pagina web se presenta una gui completa sobre los diagramas UML, abordando los diagramas de casos de uso, de classes, de secuencia y deactividades.");

    // Se debe utilizar "*", ya que estamos trabajando con punteros,
    // al utilizarlo hacemos referencia al objeto y no al puntero
    cout << *art1->getDT()<<endl;
    cout << *art2->getDT()<<endl;
    cout << *lib1->getDT()<<endl;
    cout << *lib2->getDT()<<endl;
    cout << *pag1->getDT()<<endl;
    cout<<endl;

    auto * inv1 = new Investigador("0000-0003-1234-5678", "Carla Oliveri", "Universidad de la Republica");
    auto * inv2 = new Investigador("0000-0001-8765-4321", "Alberto Santos", "Instituto Tecnico");

    cout<<inv1->toString()<<endl;
    cout<<inv2->toString()<<endl;

    cout<<endl;

    inv1->agregarPublicacion(art1);
    inv1->agregarPublicacion(art2);
    inv1->agregarPublicacion(lib2);
    inv1->agregarPublicacion(pag1);

    inv2->agregarPublicacion(art1);
    inv2->agregarPublicacion(lib1);
    inv2->agregarPublicacion(art2);

    list<string> res = inv2->listarPublicaciones(new DTFecha(10, 12, 2023), "UML");
    for (auto pub : res ) {
        cout<<pub<<endl;
    }

    cout<<endl;
    delete art2;

    list<string> res1 = inv2->listarPublicaciones(new DTFecha(1, 1, 2020), "UML");
    for (auto pub : res1 ) {
        cout<<pub<<endl;
    }


    // art2 // Objeto eliminado mediante "delete"
    cout << *art1->getDT()<<endl;
    cout << *lib1->getDT()<<endl;
    cout << *lib2->getDT()<<endl;
    cout << *pag1->getDT()<<endl;

    return 0;
}


















