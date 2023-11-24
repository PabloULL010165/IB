/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file maxMinProVector.cc
* @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
* @date 24 Nov 2023
* @brief El programa utiliza un vector para definir su máximo, mínimo y promedio.
* @bug There are no known bugs
*/


#include <iostream>
#include <vector>


void calcularEstadisticas(const std::vector<int>& vector, int& maximo, int& minimo, double& promedio) {
    if (vector.empty()) {
        std::cerr << "El vector está vacío." << std::endl;
        return;
    }

    maximo = minimo = vector[0];
    promedio = vector[0];

    for (size_t i = 1; i < vector.size(); ++i) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        } else if (vector[i] < minimo) {
            minimo = vector[i];
        }

        promedio += vector[i];
    }

    promedio /= vector.size();
}

int main() {
    
    std::vector<int> miVector = {4, 8, 15, 16, 23, 42};

    int maximo, minimo;
    double promedio;

    calcularEstadisticas(miVector, maximo, minimo, promedio);

    std::cout << "Máximo: " << maximo << std::endl;
    std::cout << "Mínimo: " << minimo << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;

    return 0;
}

