#include <iostream>

using namespace std;

int main() {
    float numero, suma = 0.0;

    std::cout << "Ingresa un numero(float): ";
    std::cin >> numero;

    while (numero != 0.0) {
        suma += numero;

        std::cout << "Ingresa un numero(float): ";
        std::cin >> numero;
    }

    std::cout << "Suma Total: " << suma << endl;

    return 0;
}
