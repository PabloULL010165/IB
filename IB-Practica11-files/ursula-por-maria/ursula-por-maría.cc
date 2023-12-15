/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file ursula-por-maría.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa abre el archivo mencionado para buscar y susituir la palabra maría por ursula, creando así un nuevo archivo de extensión .txt con los cambios realizados
  * @bug There are no known bugs
  */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void replaceUrsulaWithMaria(const string& inputFile, const string& outputFile) {
    ifstream input(inputFile);
    if (!input) {
        cerr << "Error al abrir el archivo: " << inputFile << endl;
        return;
    }

    ofstream output(outputFile);
    if (!output) {
        cerr << "Error al crear el archivo de salida: " << outputFile << endl;
        return;
    }

    string line;
    while (getline(input, line)) {
        
        size_t found = line.find("Úrsula ");
        while (found != string::npos) {
            line.replace(found, 6, "María "); 
            found = line.find("Úrsula ", found + 1);
        }

        output << line << endl;
    }

    cout << "Archivo creado correctamente: " << outputFile << endl;
}

int main() {
    string inputFile, outputFile;

    inputFile = "gabriel_garcia_marquez_cien_annos_soledad.txt";

    
    outputFile = "Maria-por-Ursula.txt";

    
    replaceUrsulaWithMaria(inputFile, outputFile);

    return 0;
}

