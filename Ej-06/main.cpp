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
        miLista.moverUlti(8);
    }
    catch (int e) {
        cerr << "Error " << e << endl;
    }
    miLista.print();    return 0;
}
template<class T> void Lista<T>::moverUlti(T val){
    Nodo<T> *auxNodo=inicio, *nuevoUlti;
    if(esVacia())throw 404;

    // si el valor buscado esta en el inicio:
    if(auxNodo->getDato()==val){
        inicio = auxNodo->getSiguiente();
        nuevoUlti = auxNodo;
        while(auxNodo->getSiguiente()!= nullptr){
            auxNodo = auxNodo->getSiguiente();
        }
        auxNodo->setSiguiente(nuevoUlti);
        nuevoUlti->setSiguiente(nullptr);
        return;
    }


    while(auxNodo->getSiguiente()!= nullptr && auxNodo->getSiguiente()->getDato()!=val){
        auxNodo = auxNodo->getSiguiente();
    }
    nuevoUlti = auxNodo->getSiguiente();
    auxNodo->setSiguiente(nuevoUlti->getSiguiente());
    while(auxNodo->getSiguiente()!= nullptr){
        auxNodo = auxNodo->getSiguiente();
    }
    auxNodo->setSiguiente(nuevoUlti);
    nuevoUlti->setSiguiente(nullptr);


};
