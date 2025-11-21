#include<iostream>
#include<string>

void saludar_persona(std::string nombre_persona){
    std::cout << "Bienvenido " << nombre_persona << "!" << "\n";
}

int main(){
    saludar_persona("Ricardo");
    saludar_persona("Ismael");
    saludar_persona("Jacqueline");
    return 0;
}

