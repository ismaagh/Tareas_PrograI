#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Ingrese el valor de n (que sea mayor o igual a 2): ";
    cin >> n;

    if (n < 2) {
        cout << "El limite debe ser mayor o igual a 2." << endl;
        return 1;
    }

    cout << "Resultado: ";
    bool primero = true;

    for (int i = 2; i <= n; i++) {
        int divisores = 0;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                divisores = 1; 
                break; 
            }
        }

        if (divisores == 0) {
            if (!primero) {
                cout << ", ";
            }
            cout << i;
            primero = false;
        }
    }    
    return 0;
}
