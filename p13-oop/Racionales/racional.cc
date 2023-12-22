#include "racional.h"

Racional::Racional() : numerador(0), denominador(1) {}

Racional::Racional(int num, int den) : numerador(num), denominador(den) {
    if (denominador == 0){
        std::cerr << "Error: Denominador no puede ser cero." << std::endl;
        exit(1);
    }
}

int Racional::getNumerador() const {
    return numerador;
}

int Racional::getDenominador() const{
    return denominador;
}

void Racional::imprimir() const {
    std::cout << numerador << "/" << denominador;
}

void Racional::leer() {
    std::cout<<"Ingrese el numerador: ";
    std::cin >> numerador;

    std::cout<<"Ingrese el denominador: ";
    std::cin >> denominador;

    if (denominador == 0) {
        std::cerr<<"Error: Denominador no puede ser cero."<<std::endl;
        exit(1);
    }
}

Racional Racional::suma(const Racional& otro) const {
    int nuevoNumerador = numerador * otro.denominador + otro.numerador * denominador;
    int nuevoDenominador = denominador  * otro.denominador;
    return Racional(nuevoNumerador, nuevoDenominador);
}

Racional Racional::resta(const Racional& otro) const {
    int nuevoNumerador = numerador * otro.denominador - otro.numerador * denominador;
    int nuevoDenominador = denominador * otro.denominador;
    return Racional(nuevoNumerador, nuevoDenominador);
}

Racional Racional::multiplicacion(const Racional& otro) const {
    int nuevoNumerador = numerador * otro.numerador;
    int nuevoDenominador = denominador * otro.denominador;
    return Racional(nuevoNumerador, nuevoDenominador);
}

Racional Racional::division(const Racional& otro) const {
    if (otro.numerador == 0) {
        std::cerr << "Error: Division por cero." << std::endl;
        exit(1);
    }
    int nuevoNumerador = numerador * otro.denominador;
    int nuevoDenominador = denominador * otro.numerador;
    return Racional(nuevoNumerador, nuevoDenominador);
}

bool Racional::comparar(const Racional& otro) const {
    return numerador * otro.denominador == otro.numerador * denominador;
}

std::ostream& operator<<(std::ostream& os, const Racional& racional) {
    os << racional.getNumerador() << "/" << racional.getDenominador();
    return os;
}

std::istream& operator>>(std::istream& is, Racional& racional) {
    racional.leer();
    return is;
}
