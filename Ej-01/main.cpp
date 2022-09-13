#include <iostream>
#include "../ClasesPrincipales/Lista.h"
#include "../ClasesPrincipales/Pila.h"

using namespace std;
void eliminar_desde_pila(Pila<unsigned int> &p, Lista<int> &l);

int main() {
    Lista<int> miLista;
    Pila<unsigned int> miPila;
    miLista.insertarPrimero(3);
    miLista.insertarPrimero(9);
    miLista.insertarPrimero(8);
    miLista.insertarPrimero(6);
    miLista.insertarPrimero(4);
    miLista.insertarPrimero(2);
    miPila.push(5);
    miPila.push(2);

    miLista.print();
    eliminar_desde_pila(miPila, miLista);
    miLista.print();
    return 0;
}

void eliminar_desde_pila(Pila<unsigned int> &p, Lista<int> &l){
    while(!p.esVacia()){
        try {
            l.remover(p.pop() - 1);
        }
        catch (int e) {
            cerr << "Error " << e << endl;
            system("pause");
        }
    }
}
