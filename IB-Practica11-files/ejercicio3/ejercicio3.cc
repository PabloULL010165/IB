/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file ejercicio3.cc
  * @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
  * @date Nov 17 2023
  * @brief El programa imprime en pantalla la palabra con mayor número de vocales y la palabra con el mayor número de consonantes.
  * @bug There are no known bugs
  */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cctype>

using namespace std;

void processFile(const string& inputFile) {
    
    vector<vector<string>> wordsByLetter(26);

    
    ifstream input(inputFile);
    if (!input) {
        cerr << "Error al abrir el archivo: " << inputFile << endl;
        return;
    }

    
    string word;
    while (input >> word) {
        if (!word.empty()) {
            char firstLetter = tolower(word[0]);
            if (isalpha(firstLetter)) {
                int index = firstLetter - 'a';
                wordsByLetter[index].push_back(word);
            }
        }
    }

    
    for (int i = 0; i < 26; ++i) {
        char letter = 'A' + i;
        string outputFileName = string(1, letter) + ".txt";
        ofstream output(outputFileName);
        if (output) {
            for (const string& w : wordsByLetter[i]) {
                output << w << endl;
            }
            cout << "Archivo creado: " << outputFileName << endl;
        } else {
            cerr << "Error al crear el archivo: " << outputFileName << endl;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Uso: " << argv[0] << " <nombre_del_archivo>" << endl;
        return 1;
    }

    string inputFile = argv[1];
    processFile(inputFile);

    return 0;
}

