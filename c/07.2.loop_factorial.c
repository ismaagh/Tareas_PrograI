#include<stdio.h>

int main(){
    int factorial = 1, n;
    printf("Ingresa un número n:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) factorial *= i;
    printf("El factorial de %d es: %d", n, factorial);
    return 0;
}
