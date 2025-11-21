#include <iostream>

int main(){
    int edad = 23;
    // Condicionales independientes, Se evaluan todas las condiciones !PELIGRO!
    if(edad < 18) std::cout << "Eres menor de edad";
    if(edad >= 18) std::cout << "Eres mayor de edad";
    return 0;
}
