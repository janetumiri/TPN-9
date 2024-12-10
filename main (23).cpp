#include <iostream>
#include <string>

class Empleado {
private:
    std::string nombre;
    float sueldo;

public:
    Empleado(std::string n, float s) : nombre(n), sueldo(s) {}

    void imprimirDatos() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Sueldo: " << sueldo << std::endl;
    }

    void verificarImpuestos() {
        if (sueldo > 3000) {
            std::cout << "El empleado debe pagar impuestos." << std::endl;
        } else {
            std::cout << "El empleado no debe pagar impuestos." << std::endl;
        }
    }
};

int main() {
    Empleado empleado1("Maria", 3500);
    empleado1.imprimirDatos();
    empleado1.verificarImpuestos();

    return 0;
}