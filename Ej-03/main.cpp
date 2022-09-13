#include <iostream>

using namespace std;
void asteriscos(int n){
    if(n==0)return;
    asteriscos(n-1);
    cout << "*";
}
int main() {
    asteriscos(4); // muestra ****
    return 0;
}
