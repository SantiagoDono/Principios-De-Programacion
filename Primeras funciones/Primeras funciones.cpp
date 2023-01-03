
#include<stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;
int al_cuadrado(int numero) {
    int resultado = numero * numero;
    cout << "El resultado de la funcion es: " << resultado << endl;
    return resultado;
}
int main()
{
    int unNum = 4;
    int res, resultado;

    res = al_cuadrado(unNum);
    cout << unNum << " al cuadrado da: " << res << endl;

    resultado = al_cuadrado(10);
    cout << "10 al cuadrado da: " << resultado << endl;
    return 0;
}

