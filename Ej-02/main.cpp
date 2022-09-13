#include <iostream>

using namespace std;
void rango(int n){
    if(n == 0)return;
    rango(n-1);
    if(n%2!=0 )cout << n << " ";
}

int main() {

    rango(6); // muestra 1 3 5

    return 0;
}
