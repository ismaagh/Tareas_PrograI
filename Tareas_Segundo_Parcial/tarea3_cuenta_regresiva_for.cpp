#include <iostream>
using namespace std;

int main(){
	int n ;
	std::cout << "Ingresa el valor de n (n debe ser positivo): ";
	std::cin >> n;

	for(int i = n; i >= 0; i--){
	     std::cout << i << endl;
	}
    return 0;
}
