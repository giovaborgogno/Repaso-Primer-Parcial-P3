#include <iostream>
//recibe como parametros un arreglo, y el tamaño del arreglo -1 ;
int sumarArreglo(int arr[], int tam){
    if(tam==-1)return 0;
    return arr[tam]+ sumarArreglo(arr, tam-1);


};
int main() {
    int a[] = {3,5,7,9};
    std::cout << sumarArreglo(a, 3); // Muestra 24
    return 0;
}
