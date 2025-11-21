#include <iostream>
using namespace std;

int main(){
	int n;
	std::cout << "Ingresa el valor de n (n debe ser positivo): ";
	std::cin >> n;
	int i = n;
	do{
	    std::cout << i << endl;
		i--;
	} while(i >= 0);

   return 0;
}
