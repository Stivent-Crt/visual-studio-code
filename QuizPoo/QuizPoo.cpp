#include <iostream>
#include <string.h>

class Lacteos {
    //atributos
private:
    int cantidad; //cantidad de producto en litros o unidades
    std::string producto; //leche, huevos, queso, queso crema, mantequilla, yogurt, etc.

protected:
    double precio; //precio del producto
public:
    Lacteos() : cantidad(0), producto(""), precio(0.0) {}
    void setCantidad(int cantidad) {
        this->cantidad = cantidad;
    }

    int getCantidad() {
        return this->cantidad;
    }

    void setProducto(std::string producto) {
        this->producto = producto;
    }

    std::string getProducto() {
        return this->producto;
    }

    //metodos 
    void calcularPrecio() {
        if (producto == "leche") {
            precio = cantidad * 3000; //precio por caja de leche
        } else if (producto == "huevos") {
            precio = cantidad * 1500; //precio por unidad de huevo
        } else if (producto == "queso") {
            precio = cantidad * 1600; //precio por 1 barra de 500 gramos de queso
        } else if (producto == "queso crema") {
            precio = cantidad * 2000; //precio por 1 paquete de 600 gramos de queso crema
        } else if (producto == "mantequilla") {
            precio = cantidad * 1800; //precio por la caja de 750 gramos de mantequilla
        } else if (producto == "yogurt") {
            precio = cantidad * 4500; //precio por 1 litro de yogurt
        } else {
            std::cout << "Producto no reconocido" << std::endl;
            precio = 0.0;
        }
    }
};
