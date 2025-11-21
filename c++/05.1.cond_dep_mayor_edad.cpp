#include <iostream>

int main(){
    int edad = 23;
    // Condicionales dependientes, solo se evaluan de forma secuencial mientras no se cumplan las condiciones
    if(edad >= 18) std::cout << "Eres mayor de edad";
    else std::cout << "Eres menor de edad";
    return 0;
}
