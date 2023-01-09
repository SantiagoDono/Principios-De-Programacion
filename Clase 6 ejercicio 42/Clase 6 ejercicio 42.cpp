#include<stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;
void ordenar() {
    
    int ingreso = 0,menor = 0,mayor = 0,cont=0,cantP=0;

    for (int i = 0; i <= 9; i++)
    {
        cout << "ingrese un numero: ";
        cin >> ingreso;
        if (i == 0) {
            menor = ingreso;
            mayor = ingreso;
        }else
            if (ingreso > mayor and ingreso > 0) {
                mayor = ingreso;
                cantP++;
            }else
                if (ingreso < menor and ingreso > 0) {
                    menor = ingreso;
                    cantP++;
                }
    }
    cout << "El numero mas grande recibido es: " << mayor << "\nEl numero mas chico recibido es: " << menor<< "\n La cantidad de positivos recibidos es de: ";
    if (cantP == 0) {
        cout << 0;
    }else
        if (cantP == 1) {
            cout << 1;
        }
        else {
            cout << 2;
        }

  
}
int main()
{
    ordenar();
}

