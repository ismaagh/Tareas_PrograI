#include<iostream>
#include<string>

std::string toUpperCase(std::string frase){
    std::string frase_upper = "";
    int letra;
    for(int i = 0; i < frase.length(); i++){
        letra = (int)frase[i];
        if(letra >= 97 & letra <= 122){
            letra -= 32;
        }
        frase_upper += (char)letra;
    }
    return frase_upper;
}

int main(){
    std::string aux;
    std::cout <<  toUpperCase("hOlA mUNDo") << "\n";
    aux = toUpperCase("adios mundo") + "!";
    std::cout << aux << "\n";
    aux = toUpperCase("BIenvENIDo mundo");
    std::cout << aux;
}
