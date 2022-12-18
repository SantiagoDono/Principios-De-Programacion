// Clase 4 ejercicio 24.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
using namespace std;
//Ejercicio 24) Dado un texto que termina en punto, ver cuántos dígitos, minúsculas y mayúsculas se ingresaron
int main()
{
    char letra;
    
    int may=0, min=0, num=0;
  
    cout << "ingrese un texto que termine en punto: " << endl;
    do
    {
        letra = getchar();
        if (letra >47 and letra < 58)
        {
            num++;
        }else
            if (letra > 64 and letra < 91) {
                may++;
            }else
                if (letra > 96 and letra < 123) {
                    min++;
                }

    } while (letra != 46);
    cout << "Minusculas: " << min << "\nMayusculas: " << may << "\nNumeros: " << num << endl;
}

