#include "menu.hpp"
using namespace std;

MaterialOrdenado Material;

void mostrarMenu(){
    cout << "\n --- Menu ---\n";
    cout << "1. Almacenar Datos\n";
    cout << "2. Ubicar material por titulo\n";
    cout << "3. Ubicar material por tipo\n";
    cout << "4. Borrar material por titulo\n";
    cout << "5. Salir\n";
}

void elegirOpcion(){

    int opcion; // Se declara la variable local opcion, donde se almacenara la opcion elegida por el usuario en el menu
    cout << "Ingrese una opcion: ";
    cin >> opcion; //Se recibe la opcion escogida por el usuario

    switch (opcion){
        case 1: //Definir intervalo del juego
            almacenarDatos();
            break;
        case 2: //Definir la dificultad del juego
            buscarMatPorTit();
            break;
        case 3: //Se inicia el juego
            buscarMatPorTip();
            break;
        case 4: //Se inicia el juego
            borrarMatPorTit();
            break;
        case 5: //Salir
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
        case 1: //Definir intervalo del juego
            almacenaMatLec();
            break;
        case 2: //Definir la dificultad del juego
            almacenaMatAV();
            break;
        default: //Opcion incorrecta
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }
}

void almacenaMatLec(){

    string opcionMat;
    string tituloRec;
    string grupoRec;
    string tipoMatRec;
    string autorRec;
    string editorialRec;
    string generoRec;
    string estadoRec;
    string cantHojasRec;
    string precioRec;
    string resumenRec;
    string matRelaRec;
    string duracionRec;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingresa el titulo del material" << endl;
    getline(cin, tituloRec);
    
    grupoRec = "Material de lectura";
    
    cout << "Ingresa el tipo de material\n1. Libro\n2.Noticia" << endl;
    getline(cin, opcionMat);

    if (opcionMat == "1"){
        tipoMatRec = "Libro";
    } else if (opcionMat == "2"){       
        tipoMatRec = "Noticia";               
    }
    
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
    
    if (tipoMatRec == "Libro") {
        Material.AgregarMaterial(new Libro(tituloRec, grupoRec, tipoMatRec, autorRec, editorialRec, generoRec, 
            estadoRec, cantHojasRec, precioRec, resumenRec, matRelaRec));
    } else if (tipoMatRec == "Noticia"){
        Material.AgregarMaterial(new Noticia(tituloRec, grupoRec, tipoMatRec, autorRec, editorialRec, generoRec, 
            estadoRec, cantHojasRec, precioRec, resumenRec, matRelaRec));
    }
    Material.imprimirDatos();
}

void almacenaMatAV(){

    string opcionMat;
    string tituloRec;
    string grupoRec;
    string tipoMatRec;
    string autorRec;
    string editorialRec;
    string generoRec;
    string estadoRec;
    string cantHojasRec;
    string precioRec;
    string resumenRec;
    string matRelaRec;
    string duracionRec;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingresa el titulo del material" << endl;
    getline(cin, tituloRec);
    
    grupoRec = "Material audivisual";
    
     grupoRec = "Material de lectura";
    
    cout << "Ingresa el tipo de material\n1. Pelicula\n2.Podcast" << endl;
    getline(cin, opcionMat);

    if (opcionMat == "1"){
        tipoMatRec = "Pelicula";
    } else if (opcionMat == "2"){       
        tipoMatRec = "Podcast";               
    }

    cout << "Ingresa el autor del titulo" << endl;
    getline(cin, autorRec);

    cout << "Ingresa el genero del material" << endl;
    getline(cin, generoRec);

    cout << "Ingresa la duracion del material" << endl;
    getline(cin, duracionRec);

    cout << "Ingresa el estado del material" << endl;
    getline(cin, estadoRec);

    cout << "Ingresa el precio del material" << endl;
    getline(cin, precioRec);
    
    cout << "Ingresa un resumen del material" << endl;
    getline(cin, resumenRec);

    cout << "Ingresa material relacionado" << endl;
    getline(cin, matRelaRec);

    if (tipoMatRec == "Pelicula") {
        Material.AgregarMaterial(new Pelicula(tituloRec, grupoRec, tipoMatRec, autorRec, generoRec, duracionRec, 
            estadoRec, precioRec, resumenRec, matRelaRec));
    } else if (tipoMatRec == "Podcast"){
        Material.AgregarMaterial(new Podcast(tituloRec, grupoRec, tipoMatRec, autorRec, generoRec, duracionRec, 
            estadoRec, precioRec, resumenRec, matRelaRec));
    }
    Material.imprimirDatos();   
}

void borrarMatPorTit(){

    string tituloParaBorrar;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingrese el titulo del material que desea eliminar" << endl;
    getline(cin,tituloParaBorrar);
    Material.borrarMaterial(tituloParaBorrar);
    cout << "Borrado exitoso, quedan los siguientes elementos en su base de datos" << endl;
    Material.imprimirDatos();
    
}

void buscarMatPorTit(){

    string tituloParaBuscar;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingrese el titulo del material que desea buscar" << endl;
    getline(cin,tituloParaBuscar);
    cout << "Posee los siguiente elementos con este titulo en su base de datos" << endl;
    Material.imprimirInformacionTit(tituloParaBuscar);
    

}

void buscarMatPorTip(){

    string tipoParaBuscar;
    int opcion;

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
    cout << "Posee los siguiente elementos con este titulo en su base de datos" << endl;
    Material.imprimirInformacionTip(tipoParaBuscar);
    
}