#include<iostream>
#include<string>

int main(){
    std::string frase;
    std::string frase_upper = "";
    int letra;
  
    std::cout << "Ingresa un mensaje:";
    getline(std::cin, frase);
    for(int i = 0; i < frase.length(); i++){
        letra = (int)frase[i];
        if(letra >= 97 & letra <= 122){
            letra -= 32;
        }
        frase_upper += (char)letra;
    }
    std::cout << frase_upper << "\n";
    return 0;
}
