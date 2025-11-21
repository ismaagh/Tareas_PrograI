#include <iostream>

int main(){
	int n;
	int resultado = 0, n_cuadrado = 0;
    	std::cout << "Ingresa el valor de n: ";
	std::cin >> n;

	for(int i = 1; i <= n; i++){
	n_cuadrado = i * i;
	resultado += n_cuadrado;
	}
	std::cout << "Resultado = " << resultado;

return 0;
}
