#include <iostream>
#include "string.h"

class Vehiculo {
private:
    int modelo;


public:

    void setModelo(int modelo) {
        modelo<2000 || modelo>2000 ? 2000 : modelo;
    
    }

    void getModelo() {
        std::cout << "El modelo del vehiculo es: " << this->modelo << std::endl;
    }
};


int main() {
    Vehiculo VehiculoJuan;

    VehiculoJuan.setModelo(2005);
    VehiculoJuan.getModelo();

    return 0;
}