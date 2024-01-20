
#include "RecEmail.hpp"    

void recibirEmail(){    

    std::string EmailRecibido; /**< Se almacena el email recibido por el usuario. */
    bool resultado; /**< Se recibe el resultado del metodo VerifRegex que indica si el Email esta correcto o no */
    auto const regexArroba = std::regex ("@"); /**< Expresion que debe estar en el correo */
    
    // Se indica al usuario las características que debe tener el correo
    std::cout << "Para ingresar su correo debe tener en cuenta lo siguiente:" << std::endl; 
    std::cout << "Su correo tendra el siguiente formato nombre@dominio.extension" << std::endl;
    std::cout << "Este debe cumplir las siguientes condiciones:" << std::endl;
    std::cout << "1. El nombre puede contener letras, numeros, puntos (.) y guiones (-)( )," 
              << " pero no debe comenzar ni terminar con un punto o guion." << std::endl;
    std::cout << "2. El nombre no debe de tener mas de 15 letras, numeros, puntos y guiones" << std::endl;
    std::cout << "3. El dominio SOLO puede contener letras y debe tener al menos un punto al final" << std::endl;
    std::cout << "4. La extensioon puede contener solo letras y debe tener entre 2 y 4 caracteres." << std::endl;
    std::cout << "5. No se permiten caracteres especiales adicionales en ninguna parte de la direccion de correo electronico." << std::endl;
    std::cout << "A continuacion digite su correo electronico considerando las condiciones anteriores: " << std::endl;

    

    // Se recibe el correo electronico del usuario.
    std::getline(std::cin, EmailRecibido);

    // Se verifica si el usuario ingreso un arroba en el correo
    auto const ComprArroba = std::regex_search(EmailRecibido, regexArroba);
    
    /* Si el usuario no ingresa el @ se envia el error invalid_argument
    a traves del throw al catch, ya que no se ingresa un caracter esperado
    */
    try {
        if (ComprArroba == false)
            throw std::invalid_argument("Error: No coloco el simbolo arroba en su correo, intentelo de nuevo..."); 
    /*
    El catch atrapa el argumento enviado por el throw y maneja el error, se indica que no agrego el @ a su correo
    al usuario y se solicita ingresarlo de nuevo
    */
    } catch (const std::exception& e) {
        	std::cerr << e.what() << std::endl;
            recibirEmail();
    }

    Regex Email(EmailRecibido); // Se instancia el objeto de la clase Email
    resultado = Email.VerifRegex(); // Se utiliza el método de la clase encargado de verificar si el formato del correo es correcto

    // Se utilizan excepciones para verificar si se cumplio o no con lo solicitado
    try {
		if (resultado == false) // Si no se cumple se envia el error invalid_argument al catch por medio del throw
			throw std::invalid_argument("Error: El correo NO cumple con lo estipulado, intentelo de nuevo..."); 

        std::cout << "Su correo cumple con las caracteristicas solicitadas, saliendo del programa..." << std::endl;
        exit(0);
    /*
    El catch atrapa el argumento enviado por el throw y maneja el error, se indica que cometió error al usuario y 
    se solicita ingresarlo de nuevo
    */
	} catch  (const std::exception& e) {
			std::cerr << e.what() << std::endl;
            recibirEmail();
	}                             
}