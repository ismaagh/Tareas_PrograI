#include<iostream>
#include<string>

int main(){
    std::string cadena, cadena_inv = "";
    std::cin >> cadena;
    for(int i = cadena.length() - 1; i >= 0; i--) cadena_inv += cadena[i];
    std::cout << cadena_inv << "\n";
    return 0;
}
