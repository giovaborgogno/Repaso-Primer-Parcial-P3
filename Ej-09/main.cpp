#include <iostream>
#include "../ClasesPrincipales/Cola.h"
#include "../ClasesPrincipales/Pila.h"

template <class T> void invertir(Cola<T> &q){
    Pila<T> pila;
    while(!q.esVacia()){
        pila.push(q.desencolar());
    }
    while(!pila.esVacia()){
        q.encolar(pila.pop());
    }

};
int main() {
    Cola<int> miQueue;
    miQueue.encolar(8);
    miQueue.encolar(6);
    miQueue.encolar(4);
    miQueue.encolar(2);

    invertir(miQueue);

    while(!miQueue.esVacia()){
        std::cout << miQueue.desencolar() << "<-";
    }
    return 0;
}
