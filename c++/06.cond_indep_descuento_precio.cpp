#include<iostream>

/* 
Programa que realiza un descuento de acuerdo a las siguientes reglas:
pago_total en (1000, ∞   )-> Descontar el 20%
pago_total en (500, 1000]  -> Descontar el 10%
pago_total en (0,500]    -> Sin descuento
*/

int main(){
    float pago_total;
    std::cout << "Ingresa el pago total:$";
    std::cin >> pago_total;
    if(pago_total > 1000) std::cout << "El pago con descuento es:$" << pago_total * (1-0.2);
    if(pago_total > 500 & pago_total <= 1000) std::cout << "El pago con descuento es:$" << pago_total * (1-0.1);
    if(pago_total > 0 & pago_total <=500) std::cout << "No se aplica ningún descuento, pagar el total:$" << pago_total;
    return 0;
}
