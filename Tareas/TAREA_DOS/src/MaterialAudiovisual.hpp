#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include <iostream>
using namespace std;

class MaterialAV {
    protected:
        string tituloAV;
        string grupoAV;
        string autorAV;
        string tipoDeMaterialAV;
        string generoAV;
        string duracionAV;
        string estadoAV;
        string precioAV;
    public:
        MaterialAV(string tituloAV, string grupoAV, string autorAV, string tipoDeMaterialAV,
            string generoAV, string duracionAV, string estadoAV, string precioAV);
};

#endif