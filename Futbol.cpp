#include <iostream>
#include "string.h"

class EquipoFutbol {
private:
    std::string nombre;

protected:
    int puntosTemporada;

public:

    void setnombre(std::string nombre) {
        this->nombre = nombre;
    }

    void getnombre() {
        std::cout << "El nombre del equipo es: " << this->nombre << std::endl;
    }

    void setpuntosTemporada(int puntos) {
        this->puntosTemporada = puntos;
    }

    void getpuntosTemporada() {
        std::cout << "Los puntos de la temporada son: " << this->puntosTemporada << std::endl;
    }
};
class JugadorFutbol : public EquipoFutbol {
private:    
    int GolesAnotados;

public:
    void setGolesAnotados(int GolesAnotados) {
        this->GolesAnotados = GolesAnotados;
    }

    void getGolesAnotados() {
        std::cout << "La cantidad de goles anotados es: " << this->GolesAnotados << std::endl;
    }
    std::string posicion() {
        return this->posicion();
    }
    void setPosicion(std::string posicion) {
        this->posicion() = posicion;
    }
    void getPosicion() {
        std::cout << "La posicion del jugador es: " << this->posicion() << std::endl;
    }
};

class entrenadorFutbol : public EquipoFutbol {
private:
    int aniosExperiencia;
    std::string equipodirigido;
public:
    void setAniosExperiencia(int aniosExperiencia) {
        this->aniosExperiencia = aniosExperiencia;
    }

    void getAniosExperiencia() {
        std::cout << "Los años de experiencia del entrenador son: " << this->aniosExperiencia << std::endl;
    }
    void setEquipoDirigido(std::string equipodirigido) {
        this->equipodirigido = equipodirigido;
    }

    void getEquipoDirigido() {
        std::cout << "El equipo dirigido por el entrenador es: " << this->equipodirigido << std::endl;
    }
};
int main() {
    JugadorFutbol jugador1;
    entrenadorFutbol entrenador1;
    jugador1.setnombre("Maluma");
    jugador1.getnombre();
    jugador1.setGolesAnotados(30);
    jugador1.getGolesAnotados();
    jugador1.setPosicion("Delantero");
    jugador1.getPosicion();

    entrenador1.setnombre("Mario");
    entrenador1.getnombre();
    entrenador1.setAniosExperiencia(15);
    entrenador1.getAniosExperiencia();
    entrenador1.setEquipoDirigido("FC Barcelona");
    entrenador1.getEquipoDirigido();

    return 0;
}