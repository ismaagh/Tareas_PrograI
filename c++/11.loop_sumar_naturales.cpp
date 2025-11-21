#include <iostream>

int main(){
    int n, suma = 0;
    std::cout << "Ingresa un numero:";
    std::cin >> n;
    for(int i = 1; i <= n; i++){
        suma = suma + i;
    }
    std::cout << suma;
    return 0;
}
