#include <iostream>
//#include <string>
#include "Fila.h"
#include "Matriz.h"
using namespace std;

#define MAX 100



// Función que genera la matriz final a partir del "vector de vectores"
void procesarDatos(Fila entrada[], int n, Matriz& salida, int suma) 


int main() {
    const int n = 3;
    int suma=0;
    Fila entrada[MAX];

    // Cargamos los datos manualmente en entrada
    entrada[0].set(0, 2); entrada[0].set(1, 4); entrada[0].set(2, 3);
    entrada[1].set(0, 8); entrada[1].set(1, 10); entrada[1].set(2, 6);
    entrada[2].set(0, 14);  entrada[2].set(1, 16); entrada[2].set(2, 9);

    // Creamos matriz de salida n*n
    Matriz salida(n * n, n);

    procesarDatos(entrada, n, salida, suma);

    cout << "Matriz Generada:" << endl;
    salida.mostrar();
    cout << "La suma es:" << suma;

    return 0;
}
void procesarDatos(Fila entrada[], int n, Matriz& salida, int suma){
int suma = 0;
int filaSalida = 0;
for (int i = 0; i < n; i++) {        // recorrer filas de entrada
    for (int j = 0; j < n; j++) {    // recorrer columnas
        int valor = entrada[i].get(j);
        for (int k = 0; k < n; k++) {
            salida.setDato(filaSalida, k, valor);
            suma = suma + valor;
        }
        filaSalida++;
    }
}
}