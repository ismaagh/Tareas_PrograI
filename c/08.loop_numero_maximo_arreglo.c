#include<stdio.h>

int main(){
    int n = 8;
    int arreglo[] = {2, 8, 19, 24, 36, 42, 10, 4};
    int maximo = arreglo[0];
    for(int i = 1; i < n; i++){
        if(arreglo[i] > maximo){
            maximo = arreglo[i];
        }
    }
    printf("El número máximo es: %d", maximo);
    return 0;
}
