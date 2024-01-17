/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Podcast.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

/**
 * @brief Podcast: Clase que hereda los atributos de la clase MaterialAV, agrega dos atributos y metodos para imprimir informacion y extension del podcast
*/
class Podcast : public MaterialAV {
    public:
        Podcast(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio, string resumenCont, string materialRel);
        void ext();
        void imprimeInfo();
    protected:
        string resumenCont;
        string materialRel;
};

#endif