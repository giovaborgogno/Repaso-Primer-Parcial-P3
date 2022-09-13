# Practica Primer Parcial

## Ejercicio N°1

Hacer una función que reciba una lista y una pila, la función deberá
modificar la lista original, eliminando las posiciones indicadas por cada
nodo de la pila.

void eliminar_desde_pila(Stack<unsigned int> &p, List<int> &l);  
...  
List<int> miLista;  
Stack<unsigned int> miPila;  
eliminar_desde_pila(miPila, miLista);  

Lista ejemplo: 2->4->6->8->9->3  
Pila ejemplo: 2->5  
Nueva Lista:   2->6->8->9

## Ejercicio N°2

Escriba una función void recursiva que reciba como parámetro solo un
entero positivo n y que despliegue todos los enteros impares menores a
n.

void rango(int n);  
...  
rango(6); // muestra 1 3 5


## Ejercicio N°3

Escribir una función recursiva que tenga solo un parámetro entero positivo n y muestre en la pantalla ese número de asteriscos **”*”**, todos
en una línea.

void asteriscos(int n);  
...  
asteriscos(4); // muestra ****  

## Ejercicio N°4

Escribir un método que busque en una lista enlazada un valor y mueva
la primera ocurrencia del valor a la primera posición. ( implementar
moviendo los nodos mediante enlaces, no se pueden crear o eliminar nodos)

void List::moverPri(T val){};  
...  
List<int> miLista;  
...  
miLista.moverPri(8);

Lista Ejemplo: 2->4->6->8->9->3  
Nueva Lista: 8->2->4->6->9->3

## Ejercicio N°5

Hacer una función que dada una frase ingresada por teclado la imprima
invertida. Implementar la función con la estructura de datos vista más
adecuada.

void invertir(string n);  
...  
string txt = "una imagen vale por mil palabras";  
invertir(txt); // muestra palabras mil por vale imagen una

## Ejercicio N°6

Escribir un método que busque en una lista enlazada un valor y mueva la
primera ocurrencia del valor a la ultima posición. ( implementar moviendo
los nodos mediante enlaces, no se pueden crear o eliminar nodos)

void List::moverUlti(T val){};  
...  
List<int> miLista;  
...  
miLista.moverUlti(8);

Lista Ejemplo: 2->4->6->8->9->3  
Nueva Lista: 2->4->6->9->3->8


## Ejercicio N°7

Construir una función que sume los elementos de un arreglo de enteros
recursivamente.

int sumarArreglo(int arr[], int tam);
...  
int a[] = {3,5,7,9};  
cout << sumarArreglo(a); // Muestra 24


## Ejercicio N°8

Escribir un metodo de la clase lista que, de manera recursiva, cuente
cuantos nodos posee la lista enlazada.

void List::size(){};  
...  
List<int> miLista;  
...  
// Lista Ejemplo: 2->4->6->8->9->3  
cout << miLista.size(); // Muestra 6

## Ejercicio N°9

Se pretende realizar una función que, reciba por referencia una cola e
invierta todo su conenido

template <class T>  
void invertir(Queue<T> q){};  
...  
Queue<int> miQueue;  
...  
invertir(miQueue);

Cola Ejemplo: 2->4->6->8  
Nueva Cola: 8->6->4->2