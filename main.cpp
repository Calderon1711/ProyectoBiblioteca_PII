#include <iostream>
#include "Usuario.h"
//using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main()
{
    Usuario usuario1;

    // Mostrar los valores iniciales del usuario
    std::cout << "Datos del Usuario 1 (por defecto):\n";
    std::cout << usuario1.toString() << std::endl;

    // Crear un objeto de la clase Usuario usando el constructor con parámetros
    Usuario usuario2("12345", "Juan Perez");

    // Establecer el estado del usuario2
    usuario2.setEstado(true);

    // Mostrar los datos del usuario2
    std::cout << "Datos del Usuario 2 (personalizado):\n";
    std::cout << usuario2.toString() << std::endl;

    // Modificar el nombre del usuario1 y cambiar su estado
    usuario1.setNombreCompletoUsuario("Maria Lopez");
    usuario1.setIdUsuario("67890");
    usuario1.setEstado(true);

    // Mostrar los datos modificados del usuario1
    std::cout << "Datos del Usuario 1 (modificados):\n";
    std::cout << usuario1.toString() << std::endl;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.