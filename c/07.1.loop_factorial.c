#include<stdio.h>

int main(){
    int factorial = 1, n;
    printf("Ingresa un número n:");
    scanf("%d", &n);
    int i = 1;
    while(i <= n){
        factorial *= i;
        i++;
    }
    printf("El factorial de %d es: %d", n, factorial);
    return 0;
}
