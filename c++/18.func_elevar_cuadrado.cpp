#include<iostream>

float elevar_cuadrado(float numero){
    return numero * numero;
}

int main(){
    float n = 11, n_cuadrada;
    n_cuadrada = elevar_cuadrado(n);
    std::cout << "El número " << n << " elevado al cuadrado es: " << n_cuadrada;
    return 0; /*Exit codes*/
}
