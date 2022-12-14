// Clase 3 estructura for.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdio.h>>
#include<stdlib.h>
using namespace std;
int main()
{
    // introduccion a for
    // comparacion entre while y for y el do while

    int cont, veces;
    cout << "pero por ejemplo la diferencia es si yo inicializo ahora el contador en 5 y el usuario ingresa que quiere repetir 5 veces solo el do while deberia imprimir "<< endl;
    cout << "ingrese la cantidad de * que quiere poner ";
    cin >> veces;
    cont = 5;
    cout << "con while" << endl;
    while (cont < veces)
    {
        cout << " * \n";
        cont++;
    }

    cout << "do while"<<endl;
    cont = 5;
    do
    {
        cout << " + \n";
        cont++;

    } while (cont < veces);
    
    cout << "Con for" << endl;
    for (cont = 5; cont < veces; cont++) {
        cout << " - \n";
    }
}

