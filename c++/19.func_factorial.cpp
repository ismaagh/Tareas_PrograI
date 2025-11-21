#include <iostream>

int factorial(int n){
    int resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    int numero = 10;
    for(int i = 1; i <= numero; i++){
        std::cout << "El factorial de " << i << " es:" << factorial(i) << "\n";
    }
    return 0;
}
