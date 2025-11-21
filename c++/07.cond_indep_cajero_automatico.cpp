#include<iostream>

/*
Programa que simula el comportamiento de un cajero automático:
monto_retirar en (SALDO_CLIENTE,∞    ) -> Descontar l monto retirado al saldo
monto_retirar en (0, SALDO_CLIENTE]    -> Indicar con un mensaje que no tiene suficiente saldo
*/

int main(){
    float SALDO_CLIENTE = 10000;
    float SALDO_ACTUALIZADO_CLIENTE = SALDO_CLIENTE;
    float monto_retirar;
    std::cout << "Bienvenid@! Tu SALDO es:$" << SALDO_CLIENTE << "\n";
    std::cout << "Ingresa el monto que deseas retirar:$";
    std::cin >> monto_retirar;
    if(monto_retirar <= SALDO_CLIENTE & monto_retirar > 0){
        SALDO_ACTUALIZADO_CLIENTE -= monto_retirar;
        std::cout << "Se han retirado:$" << monto_retirar << " Tu nuevo saldo es:$" << SALDO_ACTUALIZADO_CLIENTE;
    }
    if(monto_retirar > SALDO_CLIENTE) std::cout << "No cuentas con el suficiente saldo";
    return 0;
}


