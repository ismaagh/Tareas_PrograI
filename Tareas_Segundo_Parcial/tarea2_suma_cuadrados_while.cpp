#include <iostream>

int main(){
    int n, i = 0;
    int resultado = 0, n_cuadrado = 0;
    std:: cout << "Ingresa el valor de n: ";
    std:: cin >> n;
    
    while(i <= n){
        n_cuadrado = i * i;
        resultado += n_cuadrado;
        
        i++;
    }
    std:: cout << "Resultado = " << resultado;

    return 0;
}
