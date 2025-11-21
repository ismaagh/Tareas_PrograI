#include<iostream>
#include<string>

int main(){
    std::string frase;
    std::string frase_title = "";
    int letra;
    bool convertir_mayuscula = true;
  
    std::cout << "Ingresa un mensaje:";
    getline(std::cin, frase);
    for(int i = 0; i < frase.length(); i++){
        letra = (int)frase[i];
        if(convertir_mayuscula){
            if(letra >= 97 & letra <= 122){
                letra -= 32;
                convertir_mayuscula = false;
            } else convertir_mayuscula = false;
        } else if(letra == 32) convertir_mayuscula = true;
        else {
             if(letra >= 65 & letra <= 90) letra += 32;
        }
        frase_title += (char)letra;
    }
    std::cout << frase_title << "\n";
    return 0;
}
