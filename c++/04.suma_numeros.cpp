#include<iostream>

int main(){
    int number_1, number_2, suma;
    std::cout << "Ingresa el primer número:";
    std::cin >> number_1;
    std::cout << "Ingresa el segundo número:";
    std::cin >> number_2;
    suma = number_1 + number_2;
    std::cout << "La suma de " << number_1 << "+" << number_2 << "=" << suma;
    return 0;
}
