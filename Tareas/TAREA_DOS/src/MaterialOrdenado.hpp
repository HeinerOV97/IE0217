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