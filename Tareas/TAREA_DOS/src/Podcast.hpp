#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

class Podcast : public MaterialAV {
    public:
        Podcast(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio, string resumenCont, string materialRel);
        void extPod();
        void imprimeInfo();
    protected:
        string resumenCont;
        string materialRel;
};

#endif