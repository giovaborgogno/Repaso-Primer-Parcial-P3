#include <iostream>
#include "../ClasesPrincipales/Lista.h"

using namespace std;
int main() {

    Lista<int> miLista;
    miLista.insertarPrimero(3);
    miLista.insertarPrimero(9);
    miLista.insertarPrimero(8);
    miLista.insertarPrimero(6);
    miLista.insertarPrimero(4);
    miLista.insertarPrimero(2);

    std::cout << miLista.listSize(); // Muestra 6

    return 0;
}

template<class T> int Lista<T>::listSize(int i){
    Nodo<T> *aux=inicio;
    if(inicio== nullptr)return 0;
    inicio = inicio->getSiguiente();
    int size= listSize(i++)+1;
    inicio = aux;
    return size;
};
