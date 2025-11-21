#include<iostream>

int main(){
    int n = 10;
    for(int i = 1; i <= n; i++){
         if(i != n) std::cout << i << ", ";
         else std::cout << i;
    }
}
