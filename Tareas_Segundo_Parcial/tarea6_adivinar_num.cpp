#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));

    int aleatorio = rand() % 100 + 1;  // +1 porque solo genera hasta el 99
    int usuario;

    std::cout << "Ingresa un numero [1,100]: ";
    std::cin >> usuario;

    while (aleatorio != usuario) {
        if (usuario < aleatorio) {
            std::cout << "El numero a adivinar es mayor" <<endl;
        }
        if (usuario > aleatorio) {
            std::cout << "El numero a adivinar es menor" <<endl;
        }
        std::cout << "Ingresa un nuevo numero: ";
        std::cin >> usuario;
    }
    std::cout << "Adivinaste el numero  ";

    return 0;
}
