#include <stdio.h>
#include <conio.h>
#include <string.h>
 // variables globales
struct nodo{ // los nodos del arbol
  int llave;
  char color; // donde r es rojo y n es negro
  struct nodo *izquierdo;
  struct nodo *derecho;
  struct nodo *padre;
  char cadena[32];
};
nodo *inicio; // el inicio del arbol
 // funciones a utilizar
void insercion(int key, char cad[32]); // para insertar un numero en el arbol
void solucionarRojoRojo(nodo *node, int h); // para solucionar un hijo rojo en un nodo rojo
nodo *buscar(int key); // para buscar un numero en el arbolito
void ver(nodo *node, int esp, int h); // ver el arbol
int menus(int n_opciones, int x, int y); // para manejar menu con las teclas de las flechas
void liberar(nodo *node); // para liberar la memoria cuando salir del programa
