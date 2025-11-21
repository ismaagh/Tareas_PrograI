#include <stdio.h>

int main() {
    int number_1, number_2, suma;
    
    printf("\nIngresa el primer número: ");
    scanf("%d", &number_1);
    
    printf("\nIngresa el segundo número: ");
    scanf("%d", &number_2);
    
    suma = number_1 + number_2;
    
    printf("\nLa suma de %d + %d = %d\n", number_1, number_2, suma);
    
    return 0;
}
