/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file generateVector.cc
* @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
* @date 24 Nov 2023
* @brief El programa crea e imprime un vector con numeros generados de manera aleatoria.
* @bug There are no known bugs
*/


#include <iostream>
#include <vector>
#include <random>

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
    
    std::default_random_engine generator(std::random_device{}());

    
    std::uniform_real_distribution<double> distribution(lower, upper);

    
    std::vector<double> result(size);
    for (int i = 0; i < size; ++i) {
        result[i] = distribution(generator);
    }

    return result;
}

int main() {
    
    std::vector<double> my_vector = GenerateVector(30, 5.0, 10.0);

    
    for (const auto& value : my_vector) {
        std::cout << "Component: " << value << std::endl;
    }

    return 0;
}

