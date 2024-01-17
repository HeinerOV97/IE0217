/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file menu.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

// Se incluye encabezado con las declaraciones de las funciones
#include "menu.hpp"
using namespace std;

/*Se instancia un objeto de la clase MaterialOrdenado de manera global, ya que sera utilizado por todas
por todas las funciones en este archivo*/
MaterialOrdenado Material;

void mostrarMenu(){
    cout << "\n --- Menu ---\n";
    cout << "1. Almacenar Datos\n";
    cout << "2. Ubicar material por titulo\n";
    cout << "3. Ubicar material por tipo\n";
    cout << "4. Borrar material por titulo\n";
    cout << "5. Mostrar todos los materiales de la base de datos\n";
    cout << "6. Salir\n";
}

void elegirOpcion(){

    int opcion; // Se declara la variable local opcion, donde se almacenara la opcion elegida por el usuario en el menu
    cout << "Ingrese una opcion: ";
    cin >> opcion; //Se recibe la opcion escogida por el usuario

    switch (opcion){
        case 1: // Se llama a la funcion que almacena datos
            almacenarDatos();
            break;
        case 2: // Se llama a la funcion que busca material por titulo
            buscarMatPorTit();
            break;
        case 3: //Se llama a la funcion que busca material por tipo
            buscarMatPorTip();
            break;
        case 4: //Se llama a la funcion que borra material por su titulo
            borrarMatPorTit();
            break;
        case 5: //Salir
            MostrarMatComl();
            break;
        case 6:    
            std::cout << "Saliendo del programa...\n";
            exit(0);
        default: //Opcion incorrecta
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }

}

void almacenarDatos(){
    
    int opcion; // Se declara la variable local opcion, donde se almacenara la opcion elegida por el usuario en el menu

    cout << "Deseas ingresar:" << endl;
    cout << "1. Material de Lectura\n";
    cout << "2. Material audivisual\n";
    cin >> opcion; //Se recibe la opcion escogida por el usuario

     switch (opcion){
        case 1: // Se llama a la funcion que almacenara un material de lectura
            almacenaMatLec();
            break;
        case 2: // Se llama a la funcion que almacenara un material audiovisual
            almacenaMatAV();
            break;
        default: //Opcion incorrecta
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }
}

void almacenaMatLec(){

    string opcionMat; /**< Se almacena la opcion del material que se almacena Libro o Noticia. */
    string tituloRec; /**< Se almacena titulo del material. */
    string grupoRec; /**< Se almacena grupo del material. */
    string tipoMatRec; /**< Se almacena tipo del material. */
    string autorRec; /**< Se almacena autor del material. */
    string editorialRec; /**< Se almacena editorial del material. */
    string generoRec; /**< Se almacena genero del material. */
    string estadoRec; /**< Se almacena estado del material. */
    string cantHojasRec; /**< Se almacena cantidad de hojas del material. */
    string precioRec; /**< Se almacena precio del material. */
    string resumenRec; /**< Se almacena resumen del material. */
    string matRelaRec; /**< Se almacena material relacionado al material. */

    /*
    Utilizando este comando se limpia el buffer, el cual almacena la informacion mostrada por un cout o solicitada por un cin
    esto se realizo ya que al llamar a la funcion, lo ultimo que se encuentra en el buffer es la entrada de un "enter" es decir,
    el comando "\n" y el getline recibe un string hasta que se recibe un "enter", por lo que el primer getline se estaba brincando
    y formando un bucle infinito por un incorrecto flujo de trabajo.
    */
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    /* 
    Se comienza a recibir la informacion por parte del usuario utilizando el getline que permite almacenar un string con espacios
    a diferencia del cin
    */
    cout << "Ingresa el titulo del material" << endl;
    getline(cin, tituloRec);
    
    grupoRec = "Material de lectura"; //El grupo se define por defecto
    
    // Para evitar errores se solicita al usuario escoger entre las dos posibles opciones de tipo de material
    cout << "Ingresa el tipo de material\n1. Libro\n2. Noticia" << endl;
    getline(cin, opcionMat);

    if (opcionMat == "1"){
        tipoMatRec = "Libro";
    } else if (opcionMat == "2"){       
        tipoMatRec = "Noticia";               
    }
    
    // Se continua recibiendo la informacion por medio de getline
    cout << "Ingresa el autor del titulo" << endl;
    getline(cin, autorRec);
    
    cout << "Ingresa la editorial del material" << endl;
    getline(cin, editorialRec);
    
    cout << "Ingresa el genero del material" << endl;
    getline(cin, generoRec);
    
    cout << "Ingresa el estado del material" << endl;
    getline(cin, estadoRec);
    
    cout << "Ingresa la cantidad de hojas del material" << endl;
    getline(cin, cantHojasRec);
    
    cout << "Ingresa el precio del material" << endl;
    getline(cin, precioRec);
    
    cout << "Ingresa un resumen del material" << endl;
    getline(cin, resumenRec);
    
    cout << "Ingresa material relacionado" << endl;
    getline(cin, matRelaRec);
    
    /*
    Se realiza una revision, si es un libro, se solicita un espacio de memoria para almacenarlo, se instancia al objeto y se
    llama al metodo de la clase MaterialOrdenado enviandole este objeto como parametro y lo almacenara, 
    si es una noticia sucedera el mismo procedimiento
    */
    if (tipoMatRec == "Libro") {
        Material.AgregarMaterial(new Libro(tituloRec, grupoRec, tipoMatRec, autorRec, editorialRec, generoRec, 
            estadoRec, cantHojasRec, precioRec, resumenRec, matRelaRec));
    } else if (tipoMatRec == "Noticia"){
        Material.AgregarMaterial(new Noticia(tituloRec, grupoRec, tipoMatRec, autorRec, editorialRec, generoRec, 
            estadoRec, cantHojasRec, precioRec, resumenRec, matRelaRec));
    }
}

void almacenaMatAV(){

    string opcionMat; /**< Se almacena la opcion del material que se almacena Libro o Noticia. */
    string tituloRec; /**< Se almacena titulo del material. */
    string grupoRec; /**< Se almacena grupo del material. */
    string tipoMatRec; /**< Se almacena tipo del material. */
    string autorRec; /**< Se almacena autor del material. */
    string generoRec; /**< Se almacena genero del material. */
    string estadoRec; /**< Se almacena estado del material. */
    string precioRec; /**< Se almacena precio del material. */
    string resumenRec; /**< Se almacena resumen del material. */
    string matRelaRec; /**< Se almacena material relacionado al material. */
    string duracionRec; /**< Se almacena duracion del material. */
    
    // Se vuelve a utilizar el comando cin.ignore con los delimitadores para limpiar el buffer y evitar errores
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Se recibe informacion por parte del usuario
    cout << "Ingresa el titulo del material" << endl;
    getline(cin, tituloRec);
    
    grupoRec = "Material audiovisual"; //El grupo se define por defecto


    // Para evitar errores se solicita al usuario escoger entre las dos posibles opciones de tipo de material
    cout << "Ingresa el tipo de material\n1. Pelicula\n2. Podcast" << endl;
    getline(cin, opcionMat);

    if (opcionMat == "1"){
        tipoMatRec = "Pelicula";
    } else if (opcionMat == "2"){       
        tipoMatRec = "Podcast";               
    }

    // Se continua recibiendo la informacion por medio de getline
    cout << "Ingresa el autor del titulo" << endl;
    getline(cin, autorRec);

    cout << "Ingresa el genero del material" << endl;
    getline(cin, generoRec);

    cout << "Ingresa la duracion del material en minutos" << endl;
    getline(cin, duracionRec);

    cout << "Ingresa el estado del material" << endl;
    getline(cin, estadoRec);

    cout << "Ingresa el precio del material" << endl;
    getline(cin, precioRec);
    
    cout << "Ingresa un resumen del material" << endl;
    getline(cin, resumenRec);

    cout << "Ingresa material relacionado" << endl;
    getline(cin, matRelaRec);

    /*
    Se realiza una revision, si es una pelicula, se solicita un espacio de memoria para almacenarlo, se instancia al objeto y se
    llama al metodo de la clase MaterialOrdenado enviandole este objeto como parametro y lo almacenara, 
    si es un podcast sucedera el mismo procedimiento
    */
    if (tipoMatRec == "Pelicula") {
        Material.AgregarMaterial(new Pelicula(tituloRec, grupoRec, tipoMatRec, autorRec, generoRec, duracionRec, 
            estadoRec, precioRec, resumenRec, matRelaRec));
    } else if (tipoMatRec == "Podcast"){
        Material.AgregarMaterial(new Podcast(tituloRec, grupoRec, tipoMatRec, autorRec, generoRec, duracionRec, 
            estadoRec, precioRec, resumenRec, matRelaRec));
    }
}

void borrarMatPorTit(){

    string tituloParaBorrar; /**< Se almacena el titulo del material que se borrara */

    // Se limpia el buffer para evitar errores
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Se recibe informacion por parte del usuario
    cout << "Ingrese el titulo del material que desea eliminar" << endl;
    getline(cin,tituloParaBorrar);

    // Se llama al metodo de la clase MaterialOrdenado que borrara el material solicitado
    Material.borrarMaterial(tituloParaBorrar);

    // Se muestra una lista de los elementos que quedan en la base de datos para comprobar que fue borrado el material solicita
    cout << "Borrado exitoso" << endl;
    
}

void buscarMatPorTit(){

    string tituloParaBuscar; /**< Se almacena el titulo del material que se buscara */

    // Se limpia el buffer para evitar errores
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Se recibe informacion por parte del usuario
    cout << "Ingrese el titulo del material que desea buscar" << endl;
    getline(cin,tituloParaBuscar);

    // Se llama al metodo de la clase MaterialOrdenado que buscara el material solicitado
    cout << "Posee los siguiente elementos con este titulo en su base de datos" << endl;
    Material.imprimirInformacionTit(tituloParaBuscar);
    

}

void buscarMatPorTip(){

    string tipoParaBuscar; /**< Se almacena el tipo del material que se buscara */
    int opcion; /**< Se almacena la opcion del usuario */


    // Se hace escoger al usuario entre las 4 posibles opciones para evitar errores
    cout << "Ingrese el tipo de material que desea buscar:\n1.Libro\n2.Noticia\n3.Pelicula\n4.Podcast" << endl;
    cin >> opcion;
    if (opcion == 1){
        tipoParaBuscar = "Libro";
    } else if (opcion == 2){
        tipoParaBuscar = "Noticia";
    } else if (opcion == 3){
        tipoParaBuscar = "Pelicula";
    } else if (opcion == 4){
        tipoParaBuscar = "Podcast";
    }

    // Se llama al metodo de la clase MaterialOrdenado que buscara el material solicitado
    cout << "Posee los siguiente elementos con este titulo en su base de datos" << endl;
    Material.imprimirInformacionTip(tipoParaBuscar);
    
}

void MostrarMatComl(){

    Material.imprimirDatos(); // Se llama al metodo de la clase MaterialOrdenado encargado de mostrar todo en la base de datos
}