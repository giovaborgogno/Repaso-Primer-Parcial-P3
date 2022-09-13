//
// Created by giovaborgogno on 09/09/2022.
//

#include "Cola.h"
#include "ColaPrioridad.h"
#include "Lista.h"
#include "CircList.h"
#include "Pila.h"

#include <iostream>

using namespace std;

int main(){
    ColaPrioridad<int> colaPrioridad;
    Cola<int> cola;
    Lista<int> lista;
    CircList<int> circList;
    Pila<int> pila;

    for (int i = 0; i < 6; ++i) {
        pila.push(i);
        cola.encolar(i);
        colaPrioridad.encolar(i);
        colaPrioridad.encolarPrioridad(i,i);
        colaPrioridad.encolarPrioridad(i,0);
        colaPrioridad.encolarPrioridad(i, i++);
        lista.insertarUltimo(i);
        lista.insertarPrimero(i);
        lista.insertar(1, i);
        circList.insertarPrimero(i);



    }

    cout << "Exitoso";
    return 0;
}