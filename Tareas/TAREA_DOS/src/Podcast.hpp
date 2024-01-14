#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

class Podcast : public MaterialAV {
    public:
        Podcast(string titulo, string grupo, string autor, string tipoDeMaterial,
            string genero, int duracion, string estado, double precio, string resumenContPod, string materialRelPod);
        void extPod();
        void imprimeInfoPod();
    protected:
        string resumenContPod;
        string materialRelPod;
};

#endif