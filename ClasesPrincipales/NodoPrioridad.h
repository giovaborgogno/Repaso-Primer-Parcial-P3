//
// Created by giovaborgogno on 09/09/2022.
//

#ifndef PRACTICAPARCIAL1_NODOPRIORIDAD_H
#define PRACTICAPARCIAL1_NODOPRIORIDAD_H
template <class T>
class NodoPrioridad
{
private:
    T dato;
    NodoPrioridad<T> *siguiente;
    int prioridad;

public:
    T getDato()
    {
        return dato;
    }

    void setDato(T d)
    {
        dato = d;
    }

    NodoPrioridad<T> *getSiguiente()
    {
        return siguiente;
    }

    void setSiguiente(NodoPrioridad<T> *s)
    {
        this->siguiente = s;
    }

    int getPrioridad()
    {
        return prioridad;
    }

    void setPrioridad(int p)
    {
        prioridad = p;
    }
};

#endif //PRACTICAPARCIAL1_NODOPRIORIDAD_H
