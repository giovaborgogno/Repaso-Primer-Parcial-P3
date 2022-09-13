#include <iostream>
#include "../ClasesPrincipales/Lista.h"

int main() {
    Lista<int> miLista;
    miLista.insertarPrimero(3);
    miLista.insertarPrimero(9);
    miLista.insertarPrimero(8);
    miLista.insertarPrimero(6);
    miLista.insertarPrimero(4);
    miLista.insertarPrimero(2);
    miLista.print();
    try {
        miLista.moverPri(8);
    }
    catch (int e) {
        cerr << "Error " << e << endl;
    }
    miLista.print();
    return 0;
}
template<class T>
void Lista<T>::moverPri(T val){
    Nodo<T> *auxNodo = inicio, *nuevoInicio;

    if(esVacia())throw 404;
    if(inicio->getDato()==val)return;
    while(auxNodo->getSiguiente()!= nullptr && auxNodo->getSiguiente()->getDato()!=val){
        auxNodo = auxNodo->getSiguiente();
    }
    if(auxNodo->getSiguiente()== nullptr)throw 404;
    nuevoInicio = auxNodo->getSiguiente();
    auxNodo->setSiguiente(nuevoInicio->getSiguiente());
    nuevoInicio->setSiguiente(inicio);
    inicio = nuevoInicio;
};
