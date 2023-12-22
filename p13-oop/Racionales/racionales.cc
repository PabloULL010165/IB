// main.cc
#include "racional.h"

int main() {
    // Crear dos objetos Racional
    Racional r1, r2;

    // Leer los objetos Racional desde la entrada estándar
    std::cout << "Ingrese el primer número racional (numerador/denominador): ";
    r1.leer();
    std::cout << "Ingrese el segundo número racional (numerador/denominador): ";
    r2.leer();

    // Realizar operaciones y mostrar resultados
    Racional suma = r1.suma(r2);
    Racional resta = r1.resta(r2);
    Racional producto = r1.multiplicacion(r2);
    Racional cociente = r1.division(r2);

    std::cout << "Suma: ";
    suma.imprimir();
    std::cout << std::endl;

    std::cout << "Resta: ";
    resta.imprimir();
    std::cout << std::endl;

    std::cout << "Producto: ";
    producto.imprimir();
    std::cout << std::endl;

    std::cout << "Cociente: ";
    cociente.imprimir();
    std::cout << std::endl;

    // Comparar y mostrar el resultado de la comparación
    if (r1.comparar(r2)) {
        std::cout << "Los números racionales son iguales." << std::endl;
    } else {
        std::cout << "Los números racionales son diferentes." << std::endl;
    }

    return 0;
}

