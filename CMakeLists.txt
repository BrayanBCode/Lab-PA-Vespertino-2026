cmake_minimum_required(VERSION 4.2)
project(Lab_PA_Vespertino_2026)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lab_PA_Vespertino_2026 main.cpp
        Publicacion/Publicacion.cpp
        Publicacion/Publicacion.h
        PaginaWeb/Pagina_Web.cpp
        PaginaWeb/Pagina_Web.h
        Investigador/Investigador.cpp
        Investigador/Investigador.h)
