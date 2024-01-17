/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialOrdenado.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MATERIAL_ORDENADO_HPP
#define MATERIAL_ORDENADO_HPP

/* Se agregan encabezados comunes y encabezado de MaterialOrdenado.hpp para trabajar con las clases en el
el encabezado vector es llamado para utilizar vectores*/
#include <vector>
#include "MaterialesCompl.hpp"
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"

/**
 * @brief MaterialOrdenado: Clase encargada de almacenar los objetos instaciados por las clases Libro, Noticia, Pelicula y Podcast, ademas ofrece metodos para buscar los objetos y borrarlos
*/
class MaterialOrdenado {
private:
    std::vector<MaterialesCompl*> material; /**< Vector que almacenara los objetos instanciados de las diferentes clases */

public:
    /**
     * @brief AgregarMaterial Metodo que almacena por medio de un vector los objetos instanciados recibe un puntero de tipo MaterialesCompl para acceder a los objetos instanciados
    */
    void AgregarMaterial(MaterialesCompl* mat);

    /**
    * @brief imprimirDatos Metodo que muestra todos los elementos del vector
    */
    void imprimirDatos();

    /**
     * @brief borrarMaterial Metodo que borra elementos del vector
    */    
    void borrarMaterial(string elemento);

    /**
    * @brief imprimirInformacionTit Metodo que imprime elementos del vector a partir del titulo
    */
    void imprimirInformacionTit(string tituloMat);

    /**
    * @brief imprimirInformacionTip Metodo que imprime elementos del vector a partir del tipo
    */
    void imprimirInformacionTip(string tipoMat);
};

#endif