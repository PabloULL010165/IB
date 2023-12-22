#ifndef RACIONAL_H
#define RACIONAL_H

#include<iostream>

class Racional{
    private:
        int numerador;
        int denominador;
    public:
        Racional();
        Racional(int num, int den);
        int getNumerador() const;
        int getDenominador() const;

        void imprimir() const;
        void leer();
        Racional suma(const Racional& otro) const;
        Racional resta(const Racional& otro) const;
        Racional multiplicacion(const Racional& otro) const;
        Racional division(const Racional& otro) const;
        bool comparar(const Racional& otro) const;
};

std::ostream& operator<<(std::ostream& os, const Racional& racional);
std::istream& operator>>(std::istream& is, Racional& racional);

#endif
