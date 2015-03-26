#include "NodoArbolBinario.h"
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <list>          // std::list
using namespace std;

//Devuelve la suma de todos los numeros del arbol con la raiz dada.
int suma(NodoArbolBinario* raiz)
{
    int sumar = 0;
    if (raiz!=NULL){
        sumar += raiz->num;
        sumar+=suma(raiz->hijo_der)+suma(raiz->hijo_izq);
    }
    return sumar;
}

//Devuelve la cantidad de nodos que tiene el arbol con la raiz dada.
int cantidadNodos(NodoArbolBinario* raiz)
{
    int cant = 0;
    if (raiz!=NULL){
        cant++;
        cant+=cantidadNodos(raiz->hijo_der)+cantidadNodos(raiz->hijo_izq);
    }
    return cant;
}

//Devuelve el promedio de los numeros que tiene el arbol con la raiz dada.
int promedio(NodoArbolBinario* raiz)
{
    return suma(raiz)/cantidadNodos(raiz);
}

//Devuelve la cantidad de pasos que tiene que dar el algoritmo para llegar a un numero dado.
//Ejemplo: http://www.comp.nus.edu.sg/~stevenha/visualization/bst.html
//Para llegar al nodo 7 se ocupan 3 pasos (15,6,7)
//Para llegar al nodo 5 se ocupan 4 pasos (15,6,4,5)
//Para llegar al nodo 15 se ocupa 1 paso (15)
int cuantosPasos(NodoArbolBinario* raiz,int num)
{
    int pasos = 0;
    if (raiz!=NULL){

    }
    return pasos;
}

//Devuelve la cantidad de hojas que tiene el arbol con la raiz dada
int sumaHojas(NodoArbolBinario* raiz)
{

    return 0;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
