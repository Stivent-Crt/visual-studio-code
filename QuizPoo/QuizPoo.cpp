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
        std::cout << "El precio del producto sin descuento es: " << precio << std::endl;
    }
};
    class mecato {
    //atributos
    public:
        int cantidad; //cantidad de producto en unidades
        std::string producto; //papas, galletas, chocolates, etc.
        double precio=0.0; //precio del producto
    //metodos
    void calcularPrecio(){
        if (producto == "chocorramo") {
            precio = cantidad * 3000; //precio por caja de leche
        } else if (producto == "gansito") {
            precio = cantidad * 2500; //precio por unidad de huevo
        } else if (producto == "detodito") {
            precio = cantidad * 6000; //precio por 1 barra de 500 gramos de queso
        } else if (producto == "galletas festival") {
            precio = cantidad * 1200; //precio por 1 paquete de 600 gramos de queso crema
        } else if (producto == "nutella") {
            precio = cantidad * 18000; //precio por la caja de 750 gramos de mantequilla
        } else if (producto == "postre yogurt") {
            precio = cantidad * 4500; //precio por 1 litro de yogurt
        } else {
            std::cout << "Producto no reconocido" << std::endl;
            precio = 0.0;
        }
        std::cout << "El precio del producto sin descuento es: " << precio << std::endl;
    }
};
    class descuento {
    public:
        double calcularDescuento(double precio){
            double descuento = 0.0;
            if (precio > 10000) {
                descuento = precio * 0.1; //descuento del 10% para compras mayores a 10000
                std::cout << "Se le aplica descuento del 10%" << std::endl;
            } else if (precio > 5000) {
                descuento = precio * 0.05; //descuento del 5% para compras mayores a 5000
                std::cout << "Se le aplica descuento del 5%" << std::endl;
            } else {
                descuento = 0.0; //sin descuento para compras menores o iguales a 5000
                std::cout << "No se le aplica descuento" << std::endl;
            }
            return descuento;
        }
};
int main(){
    std::cout << "--- Tienda de Stivent ---- " << std::endl;
    std::cout << "Productos lacteos disponibles: leche, huevos, queso, queso crema, mantequilla, yogurt" << std::endl;
    std::cout << "Productos de mecato disponibles: chocorramo, gansito, detodito, galletas festival, nutella, postre yogurt" << std::endl;
    std::cout << "Recuerde que por compras mayores a 5000 tiene 5% de descuento y por compras mayores a 10000 tiene 10% de descuento" << std::endl;
    std::cout << "Ingrese el producto lacteo que desea comprar: ";
    std::string getProductoLacteo;
    std::cin >> getProductoLacteo;
    std::cout << "Ingrese la cantidad del producto lacteo que desea comprar: ";
    int getCantidadLacteo;
    std::cin >> getCantidadLacteo;
    Lacteos lacteo;
    lacteo.setProducto(getProductoLacteo);
    lacteo.setCantidad(getCantidadLacteo);
    lacteo.calcularPrecio();
    std::cout << "Ingrese el producto de mecato que desea comprar: ";
    std::string productoMecato;
    std::cin >> productoMecato;
    std::cout << "Ingrese la cantidad del producto de mecato que desea comprar: ";
    int cantidadMecato;
    std::cin >> cantidadMecato;
    mecato mecatito;
    mecatito.producto = productoMecato;
    mecatito.cantidad = cantidadMecato;
    mecatito.calcularPrecio();
    return 0;
}
