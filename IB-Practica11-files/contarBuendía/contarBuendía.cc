/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file contarBuendía.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa cuenta el numero de veces que aparece la frase "Buendía" en el archivo seleccionado.
  * @bug There are no known bugs
  */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countOccurrences(const string& fileName, const string& targetText) {
    ifstream input(fileName);
    if (!input) {
        cerr << "Error al abrir el archivo: " << fileName << endl;
        return -1;
    }

    int count = 0;
    string word;
    while (input >> word) {
        
        if (word == targetText || word == "Buendía") {
            count++;
        }
    }

    return count;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << endl;
        return 1;
    }

    string fileName = argv[1];
    string targetText = "Buendía";

    int occurrences = countOccurrences(fileName, targetText);

    if (occurrences >= 0) {
        cout << "El texto \"" << targetText << "\" aparece " << occurrences << " veces en el archivo." << endl;
    }

    return 0;
}


