/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file reduceSum.cc
* @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
* @date 24 Nov 2023
* @brief El programa utiliza un vector formado por numeros flotantes e imprime el resultado de la suma de los mismos.
* @bug There are no known bugs
*/


#include <iostream>
#include <vector>


float ReduceSum(const std::vector<float>& numbers) {
    float sum = 0.0f;
    for (const auto& number : numbers) {
        sum += number;
    }
    return sum;
}

int main() {
    
    std::vector<float> my_numbers = {1.5f, 2.3f, 4.7f, 6.2f, 8.1f};

    
    float sum_result = ReduceSum(my_numbers);

    
    std::cout << "Suma de los números: " << sum_result << std::endl;

    return 0;
}

