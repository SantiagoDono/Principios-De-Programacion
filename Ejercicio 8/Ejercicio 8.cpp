// Ejercicio 8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include < stdlib.h>

using namespace std;
// el usuario ingresa 5 numeros y se debe indicar cual de estos es el mayor y cual es el menor
int main()
{
    int numero,mayor,menor,contador;
    contador = 4;
        cout << " ingrese un numero " << endl;
        cin >> numero;
        mayor = numero;
        menor = numero;
    while (contador > 0)
    {
        cout << " ingrese un numero " << endl;
        cin >> numero;
        if (numero > mayor) {
            mayor = numero;
        }else
            if (numero < menor) {
                menor = numero;
            }
        contador --;

    }
    cout << " el numero mas grande ingresado es: " << mayor << endl;
    cout << " el numero mas chico ingresado es: " << menor << endl;
    return 0;
    
}

