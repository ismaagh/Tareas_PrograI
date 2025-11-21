#include<iostream>
#include<cmath> // pow

// Programa que proporciona las raices de un polinomio de segundo grado.
// x = (-b ± √b²-4ac() / (2a)

int main(){
    float a,b,c, discriminante, x1, x2, sqrt_discriminante;
    std::cout << "Ingresa el coeficiente de a:";
    std::cin >> a;
    std::cout << "Ingresa el coeficiente de b:";
    std::cin >> b;
    std::cout << "Ingresa el coeficiente de c:";
    std::cin >> c;
    discriminante = pow(b, 2) - 4.0f * a * c;
    if(discriminante >= 0){
        sqrt_discriminante = sqrt(discriminante);
        x1 = (-b + sqrt_discriminante) / (2.0f * a);
        x2 = (-b - sqrt_discriminante) / (2.0f * a);
        std::cout << "x1=" << x1 << ", x2=" << x2;
    } else {
        sqrt_discriminante = sqrt(-discriminante);
        x1 = (-b + sqrt_discriminante) / (2.0f * a);
        x2 = (-b - sqrt_discriminante) / (2.0f * a);
        std::cout << "x1=" << x1 << "i, x2=" << x2 << "i";
    }
    return 0;
}


