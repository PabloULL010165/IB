/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
*
* @file concatenacionVectores.cc
* @author Castellucci Pinchi Pablo alu0101654539@ull.edu.es
* @date 24 Nov 2023
* @brief El programa pide dos vectores e imprime un tercero formado por la concatenación de los dos anteriores.
* @bug There are no known bugs
*/

#include <iostream>
#include <vector>
#include <limits>  // Add this line for std::numeric_limits

// Función para pedir al usuario un vector de enteros
std::vector<int> GetUserVector(const std::string& vector_name) {
    std::vector<int> user_vector;

    std::cout << "Ingrese los elementos para el vector " << vector_name << " (ingrese un valor no entero para finalizar):" << std::endl;

    int input;
    while (std::cin >> input) {
        user_vector.push_back(input);
    }

    // Limpiar el flujo de entrada después de la entrada no entera
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return user_vector;
}

// Función para concatenar dos vectores
std::vector<int> ConcatenateVectors(const std::vector<int>& vector1, const std::vector<int>& vector2) {
    std::vector<int> result;

    // Agregar elementos de vector1 a result
    for (const auto& element : vector1) {
        result.push_back(element);
    }

    // Agregar elementos de vector2 a result
    for (const auto& element : vector2) {
        result.push_back(element);
    }

    return result;
}

int main() {
    // Obtener dos vectores del usuario
    std::vector<int> vector1 = GetUserVector("A");
    std::vector<int> vector2 = GetUserVector("B");

    // Concatenar los vectores utilizando la función ConcatenateVectors
    std::vector<int> concatenated_vector = ConcatenateVectors(vector1, vector2);

    // Imprimir el resultado
    std::cout << "Vector concatenado: ";
    for (const auto& element : concatenated_vector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
 
