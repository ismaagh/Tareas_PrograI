#include<iostream>

// Programa donde el usuario adivina el número del sistema.
// NOTA: Si el problema inicial cambia a "Programa que válida si la constraseña que ingreso el usuario coincide con la que se registró en sistema", el programa es equivalente (usando el tipo de dato correspondiente)

int main(){
    int NUMERO_ADIVINAR = 5, numero_usuario;
    std::cout << "Ingresa el número a adivinar [1, 10]:";
    std::cin >> numero_usuario;
    if(numero_usuario == NUMERO_ADIVINAR) std::cout << "Felicidades, adivinaste el número :)";
    else std::cout << "Ese no es el número :(";
    return 0;
}


