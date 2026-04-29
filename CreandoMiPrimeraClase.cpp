#include <iostream>
#include <string.h>

class coche {

public:
    //Atributos
    std::string fabricante;
    int cilindraje;
    int potencia;
    std::string color;
    double precio;

    //Métodos

    void encender (){

            std::cout << "El coche se ha encendido" << std::endl;
    }

    void acelerar (){

            std::cout << "El coche ha acelerado" << std::endl;
    }

    void frenar(){
        std::cout << "El coche ha frenado" << std::endl;
    }

    void girar(){
        std::cout << "El coche ha girado" << std::endl;
    }

};

int main(){

    //Primer Objeto
    coche CocheJose;
    //Segundo Objeto
    coche CocheMaria;

    CocheJose.encender();
    CocheJose.color = "Rojo";
    std::cout << "El color del coche de Jose es: " << CocheJose.color << std::endl;

    return 0;
}