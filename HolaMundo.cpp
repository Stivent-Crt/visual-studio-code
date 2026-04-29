#include <iostream>

/**
 * 
 * Implementacion del Doxygen
 * @brief Crear clase de tipo Car y subir velocidad
 * @param speed speed es variable de velocidad
 * @return Retorna la velocidad +10.
 */

class Car {
public:
    int speed;
    void accelerate(){
        speed = speed+10;
        std::cout << "Velocidad es: " << speed << std::endl;
    }
};
int main() {
    Car car1;
    car1.speed = 0;
    car1.accelerate();
    return 0;
}