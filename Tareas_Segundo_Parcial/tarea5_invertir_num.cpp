#include <iostream>

int main() {
    int n, invertido = 0, digito;

    std::cout << "Ingrese el numero a invertir: ";
    std::cin >> n;

    while (n > 0) {
        digito = n % 10; // Usa el ultimo digito de n
        invertido = invertido * 10 + digito; 
        n /= 10; // Eliminar el ultimo digito 
    }

    std::cout << "Resultado: " << invertido;

    return 0;
}
