#include <iostream>
#include <vector>
#include <string>

class Persona {
    
private:
    std::string nombre;
    int edad;
public:
    Persona(std::string nombre, int edad) : nombre(nombre), edad(edad) {}
    Persona() : nombre(""), edad(0) {}

    std::string getNombre() const { return nombre; }
    int getEdad() const { return edad; }


};

class Jugador : public Persona {
public:
    Jugador(std::string nombre, int edad, int altura, int peso, std::string posicion)
        : Persona(nombre, edad), altura(altura), peso(peso), posicion(posicion), puntos(0), rebotes(0), asistencias(0) {}

    int getAltura() const { return altura; }
    int getPeso() const { return peso; }
    std::string getPosicion() const { return posicion; }

    void AgregarEstadisticas(int nuevosPuntos, int nuevosRebotes, int nuevasAsistencias) {
    puntos += nuevosPuntos;
    rebotes += nuevosRebotes;
    asistencias += nuevasAsistencias;
}

    void MostrarEstadisticas() const {
        std::cout << "Estadisticas de " << getNombre() << ": Puntos - " << puntos << ", Rebotes - " << rebotes
                  << ", Asistencias - " << asistencias << std::endl;
    }

private:
    int altura;
    int peso;
    int puntos;
    int rebotes;
    int asistencias;
    std::string posicion;
};

class Entrenador : public Persona {
public:
    Entrenador(std::string nombre, int edad, std::string licencia, std::string InicioContrato, std::string FinContrato)
        : Persona(nombre, edad), licencia(licencia), InicioContrato(InicioContrato), FinContrato(FinContrato) {}

private:
    std::string licencia;
    std::string InicioContrato;
    std::string FinContrato;
};

class Ayudante : public Persona {
public:
    Ayudante(std::string nombre, int edad, std::string InicioContrato, std::string FinContrato)
        : Persona(nombre, edad), InicioContrato(InicioContrato), FinContrato(FinContrato) {}

private:
    std::string InicioContrato;
    std::string FinContrato;
};

class Equipo_Baloncesto {
public:
    Equipo_Baloncesto(std::string nombre, std::string ciudad)
        : nombre(nombre), ciudad(ciudad), jugadores(), entrenadores(), ayudantes() {}

    ~Equipo_Baloncesto() {}

    void mostrarInfo() const {
        std::cout << "Nombre equipo: " << nombre << ". Ciudad: " << ciudad << std::endl;
    }

    double AlturaMedia() const {
    double Atotal = 0.0;
    for (int i = 0; i < jugadores.size(); ++i) {
        Atotal += jugadores[i].getAltura();
    }
    return Atotal / jugadores.size();
}

double PesoMedio() const {
    double Ptotal = 0.0;
    for (int i = 0; i < jugadores.size(); ++i) {
        Ptotal += jugadores[i].getPeso();
    }
    return Ptotal / jugadores.size();
}

    void Quinteto() {
    std::cout << "Quinteto Titular:" << std::endl;
    int count = 0;
    for (int i = 0; i < jugadores.size() && count < 5; ++i) {
        if (jugadores[i].getPosicion() == "Base" ||
            jugadores[i].getPosicion() == "Escolta" ||
            jugadores[i].getPosicion() == "Alero" ||
            jugadores[i].getPosicion() == "Pivot") {
            std::cout << jugadores[i].getNombre() << " - " << jugadores[i].getPosicion() << std::endl;
            ++count;
        }
    }
}

void Banquillo() {
    std::cout << "Jugadores en el Banquillo:" << std::endl;
    for (int i = 0; i < jugadores.size(); ++i) {
        if (jugadores[i].getPosicion() != "Base" &&
            jugadores[i].getPosicion() != "Escolta" &&
            jugadores[i].getPosicion() != "Alero" &&
            jugadores[i].getPosicion() != "Pivot") {
            std::cout << jugadores[i].getNombre() << " - " << jugadores[i].getPosicion() << std::endl;
        }
    }
}


    void AgregarJugador(const Jugador &jugador) {
        jugadores.push_back(jugador);
    }

    void AgregarEntrenador(const Entrenador &entrenador) {
        entrenadores.push_back(entrenador);
    }

    void AgregarAyudante(const Ayudante &ayudante) {
        ayudantes.push_back(ayudante);
    }

private:
    std::string nombre;
    std::string ciudad;
    std::vector<Jugador> jugadores;
    std::vector<Entrenador> entrenadores;
    std::vector<Ayudante> ayudantes;
};

int main() {
    Jugador jugador1("Pablo", 18, 180, 90, "Delantero");
    Jugador jugador2("Fabiana", 19, 160, 70, "Pivot");
    jugador1.AgregarEstadisticas(23, 8, 9);
    jugador2.AgregarEstadisticas(20, 5, 5);
    Entrenador entrenador1("Alberto", 19, "LicenciaB", "2019", "2027");
    Ayudante ayudante1("Maria", 25, "2020", "2026");
    Equipo_Baloncesto equipo("Tenerife", "El Valle");

    equipo.AgregarJugador(jugador1);
    equipo.AgregarJugador(jugador2);
    equipo.AgregarEntrenador(entrenador1);
    equipo.AgregarAyudante(ayudante1);

    equipo.mostrarInfo();
    std::cout << "Altura Media: " << equipo.AlturaMedia() << " cm" << std::endl;
    std::cout << "Peso Medio: " << equipo.PesoMedio() << " kg" << std::endl;

    jugador1.MostrarEstadisticas();
    jugador2.MostrarEstadisticas();

    equipo.Quinteto();  
    equipo.Banquillo(); 

    return 0;
}

