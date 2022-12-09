// ejercicio 9.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include < stdlib.h>

using namespace std;
//ejercicio 9 El usuario ingresa una cantidad indefinida de números positivos, terminando con un número negativo.Se deben entonces indicar tanto el menor como el mayor de dichos números positivos ingresados


int main()
{
    int numero, mayor, menor, contador;
 
        cout << " ingrese un numero " << endl;
    cin >> numero;
    mayor = numero;
    menor = numero;
    while (numero > -1)
    {
        cout << " ingrese un numero " << endl;
        cin >> numero;
        if (numero > mayor) {
            mayor = numero;
        }
        else
            if (numero < menor && numero >-1) {
                menor = numero;
            }
        

    }
    cout << " El numero mas grande ingresado es: " << mayor << endl;
    cout << " El numero mas chico ingresado es: " << menor << endl;
    return 0;


}

