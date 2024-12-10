#include <iostream>
#include <string>

class Alumno {
private:
    std::string nombre;
    int edad;

public:
    Alumno(std::string n, int e) : nombre(n), edad(e) {}

    void imprimirDatos() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
    }

    void verificarEdad() {
        if (edad >= 18) {
            std::cout << "El alumno es mayor de edad." << std::endl;
        } else {
            std::cout << "El alumno es menor de edad." << std::endl;
        }
    }
};

int main() {
    Alumno alumno1("Juan", 20);
    alumno1.imprimirDatos();
    alumno1.verificarEdad();

    return 0;
}
