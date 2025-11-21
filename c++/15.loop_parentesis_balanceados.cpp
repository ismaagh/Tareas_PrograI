#include<iostream>

int main(){
    int i, conteo = 0, n;
    std::string cadena;
    std::cout << "Ingresa los paréntesis:";
    std::cin >> cadena;
    n = cadena.length();

    if (n % 2 == 1) std::cout << "Paréntesis no balanceados!";
    else {
        for(i = 0; i <= n - 1; i++){
            if(cadena[i] == ')') conteo -= 1;
            if(cadena[i] == '(') conteo += 1;
            if(conteo == -1) break;
        }
        if(conteo == 0) std::cout << "Paréntesis balanceados :)";
        else std::cout<< "Paréntesis no balanceados!";
        return 0;
    }
}
