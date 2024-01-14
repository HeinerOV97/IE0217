#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"

class Podcast : public MaterialAV {
    public:
        Podcast(string tituloAV, string grupoAV, string autorAV, string tipoDeMaterialAV,
            string generoAV, int duracionAV, string estadoAV, double precioAV, string resumenContAVPod, string materialRelAVPod);
        void extPod();
        void imprimeInfoPod();
    protected:
        string resumenContAVPod;
        string materialRelAVPod;
};

#endif