#include <iostream>

class Operaciones {
private:
    int num1;
    int num2;

public:
    Operaciones(int n1, int n2) : num1(n1), num2(n2) {}

    void calcularOperaciones() {
        std::cout << "Suma: " << num1 + num2 << std::endl;
        std::cout << "Resta: " << num1 - num2 << std::endl;
        std::cout << "Multiplicación: " << num1 * num2 << std::endl;
        if (num2 != 0) {
            std::cout << "División: " << static_cast<float>(num1) / num2 << std::endl;
        } else {
            std::cout << "No se puede dividir por cero." << std::endl;
        }
    }
};

int main() {
    Operaciones oper(10, 5);
    oper.calcularOperaciones();

    return 0;
}

