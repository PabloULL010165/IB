#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Función para contar el número de vocales en una palabra
int contarVocales(const std::string& palabra) {
    int count = 0;
    for (char c : palabra) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Función para contar el número de consonantes en una palabra
int contarConsonantes(const std::string& palabra) {
    int count = 0;
    for (char c : palabra) {
        if (std::isalpha(c) && std::tolower(c) != 'a' && std::tolower(c) != 'e' && std::tolower(c) != 'i' && std::tolower(c) != 'o' && std::tolower(c) != 'u') {
            count++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    // Verificar si se proporciona un argumento (nombre del archivo)
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << std::endl;
        return 1;
    }

    // Abrir el archivo
    std::ifstream archivo(argv[1]);

    // Verificar si el archivo se abrió correctamente
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo: " << argv[1] << std::endl;
        return 1;
    }

    std::string palabra;
    std::string palabraMaxVocales, palabraMaxConsonantes;
    int maxVocales = -1, maxConsonantes = -1;

    // Leer cada palabra del archivo
    while (archivo >> palabra) {
        int numVocales = contarVocales(palabra);
        int numConsonantes = contarConsonantes(palabra);

        // Actualizar la palabra con más vocales
        if (numVocales > maxVocales) {
            maxVocales = numVocales;
            palabraMaxVocales = palabra;
        }

        // Actualizar la palabra con más consonantes
        if (numConsonantes > maxConsonantes) {
            maxConsonantes = numConsonantes;
            palabraMaxConsonantes = palabra;
        }
    }

    // Cerrar el archivo
    archivo.close();

    // Imprimir resultados
    std::cout << "Palabra con más vocales: " << palabraMaxVocales << " (Número de vocales: " << maxVocales << ")" << std::endl;
    std::cout << "Palabra con más consonantes: " << palabraMaxConsonantes << " (Número de consonantes: " << maxConsonantes << ")" << std::endl;

    return 0;
}

