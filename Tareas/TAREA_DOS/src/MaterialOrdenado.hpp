/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialOrdenado.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

#include <vector>
#include "MaterialesCompl.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"


class MaterialOrdenado {
private:
    std::vector<MaterialesCompl*> material;

public:
    void AgregarMaterial(MaterialesCompl* mat);
    void imprimirDatos();
    void borrarMaterial(string elemento);
    void imprimirInformacionTit(string tituloMat);
    void imprimirInformacionTip(string tipoMat);
};

#endif