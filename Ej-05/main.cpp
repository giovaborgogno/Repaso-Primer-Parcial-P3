#include <iostream>
#include "../ClasesPrincipales/Cola.h"
#include "../ClasesPrincipales/Pila.h"

using namespace std;

void invertir(string n);
int main() {
    string txt = "una imagen vale por mil palabras";
    invertir(txt); // muestra palabras mil por vale imagen una
     return 0;
}
void invertir(string n){
    Pila<string> pila;
    string str;
    for (int i = 0; i < n.length(); ++i) {
        if(!isspace(n[i]) && n[i+1]!=NULL)str += n[i];
        else {
            pila.push(str);
            str = "";
        }
    }

    while(!pila.esVacia())cout << pila.pop() << " ";
}
