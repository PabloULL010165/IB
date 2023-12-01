#include <iostream>
#include <fstream>
#include <string>

// Función para rotar una vocal minúscula
char rotarVocal(char vocal) {
    switch (vocal) {
        case 'a': return 'e';
        case 'e': return 'i';
        case 'i': return 'o';
        case 'o': return 'u';
        case 'u': return 'a';
        default: return vocal;
    }
}

int main(int argc, char* argv[]) {
    // Verificar si se proporciona un argumento (nombre del archivo)
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << std::endl;
        return 1;
    }

    // Abrir el archivo de entrada
    std::ifstream archivoEntrada(argv[1]);

    // Verificar si el archivo se abrió correctamente
    if (!archivoEntrada.is_open()) {
        std::cerr << "No se pudo abrir el archivo de entrada: " << argv[1] << std::endl;
        return 1;
    }

    // Crear un nombre para el archivo de salida
    std::string nombreArchivoSalida = "rotated_" + std::string(argv[1]);

    // Abrir el archivo de salida
    std::ofstream archivoSalida(nombreArchivoSalida);

    // Verificar si el archivo se abrió correctamente
    if (!archivoSalida.is_open()) {
        std::cerr << "No se pudo abrir el archivo de salida: " << nombreArchivoSalida << std::endl;
        return 1;
    }

    char caracter;

    // Leer y rotar cada caracter del archivo de entrada
    while (archivoEntrada.get(caracter)) {
        if (std::isalpha(caracter) && std::islower(caracter)) {
            // Rotar solo si es una vocal minúscula
            caracter = rotarVocal(caracter);
        }
        archivoSalida.put(caracter);
    }

    // Cerrar los archivos
    archivoEntrada.close();
    archivoSalida.close();

    std::cout << "Rotación completada. Resultado guardado en: " << nombreArchivoSalida << std::endl;

    return 0;
}

