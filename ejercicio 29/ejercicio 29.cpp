#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
/*Ejercicio 29) El usuario ingresa una palabra de 5 caracteres, y luego escribe una
línea de texto.Indicar cuántas veces se puede formar la palabra con las letras de
la línea ingresada, asumiendo que dicha palabra no repite ninguna letra*/
int main()
{
    char palabra[5];
    char texto;
    int cont[5];
    int pos = 0,posmenor=0;
    cout << "ingrese una palabra de 5 letras: " << endl;
    //almaceno la palabra
    for (pos=0; pos < 5; pos++)
    {
        palabra[pos] = getchar();
        cont[pos] = 0;
    }
    // este gectchar "eliminar el enter que dimos"
    getchar();
    // ingresamos el texto a comprar con la palabra
    cout << "\nIngrese un texto: " << endl;
    //vemos la primer letra y entramos en el while
    texto = getchar();
    while (texto !='\n')
    {
        pos = 0;
        do
        {
            //si la letra que esta en el arreglo en la pos 0 es igual al texto sumamos uno en el otro arreglo
            if (palabra[pos] == texto) {
                cont[pos] = cont[pos] + 1;
                pos=5;// si es igual forzamos la salida
            }
            else {
                //si no aumentamos una posicion
                pos++;
            }

        } while (pos<5);
        texto = getchar();
        
    }
    //buscamos el valor minimo del arreglo 
    posmenor = 0;
    for (pos = 1; pos < 5; pos++)
    {
        if (cont[pos] < cont[posmenor])
        {
            posmenor = pos;
        }
    }
    cout << "la palabra se puede formar un total de: " << cont[posmenor] << " veces";
    return 0;
}
