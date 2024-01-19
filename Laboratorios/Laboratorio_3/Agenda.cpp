#include "Agenda.hpp"

template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto){
    // Verificar si ya existe el contacto
    typename std::list<Contacto<T> >::const_iterator it;
    for( it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == contacto.getTelefono()){
            throw std::invalid_argument("Ya existe un contacto con este numero");
        }
    }
    // Se agrega el contacto
    contactos.push_back(contacto);
}

template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono){
    typename std::list<Contacto<T> >::const_iterator it;
    for( it = contactos.begin(); it != contactos.end(); it++){
        if (it->getTelefono() == telefono){
            contactos.erase(it);
            return;
        }
    }
    throw std::out_of_range("No se encuentra un contacto con ese numero");
}

template <typename T>
void Agenda<T>::mostrarContactos() const {
    typename std::list<Contacto<T> > ::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it){
        std::cout << "Nombre: "   << it->getNombre()   << " "
                  << "Telefono: " << it->getTelefono() << " "
                  << "Email: "    << it->getEmail()    << std::endl; 
    }
}

template <typename T>
std::list<Contacto<T> > Agenda<T>::buscarContactos(const std::string& patron) const {
    
    //Se crea una lista de tipo Contacto
    std::list<Contacto<T> > resultados;

    // Se declara una variable que guardara el tamano de una cadena
    std::string::size_type pos; 

    // Se crea un iterador para la lista
    typename std::list<Contacto<T> >::const_iterator it;

    // Se recorren todos los elementos de la lista contactos
    for (it = contactos.begin(); it != contactos.end(); ++it) {  
        /* Se busca el elemento nombre de contactos que posea la variable con el mismo contenido de patron 
        y se le asigna su tamano a la variable pos
        */
        pos = it->getNombre().find(patron); // Se le asigna el tamano de la cadena a la variable pos
        if (pos != std::string::npos) { // Si el comando si logra encontrar la variable anterior y pos tiene un valor
            resultados.push_back(*it); // Se agrega el elemento a la lista nueva resultados
        } else {
            pos = it->getEmail().find(patron); // Si no se encuentra el nombre, se realiza la prueba con el email
            if (pos != std::string::npos) { // Se comprueba si si se logro ubicar el elemento verificando que pos tenga un valor
                resultados.push_back(*it); // Si se ubica se agrega el elemento a la lista nueva resultados
            }
        }
    }
    return resultados; //Se devuelve una nueva lista resultados
}