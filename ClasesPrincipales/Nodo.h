//
// Created by giovaborgogno on 09/09/2022.
//

#ifndef PRACTICAPARCIAL1_NODO_H
#define PRACTICAPARCIAL1_NODO_H
template <class T>
class Nodo
{
private:
    T dato;
    Nodo<T> *siguiente;

public:
    T getDato()
    {
        return dato;
    }

    void setDato(T d)
    {
        dato = d;
    }

    Nodo<T> *getSiguiente()
    {
        return siguiente;
    }

    void setSiguiente(Nodo<T> *s)
    {
        this->siguiente = s;
    }
};

#endif //PRACTICAPARCIAL1_NODO_H
