#include<stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;

int guardar_positivos(int arreglo[], int tam) {
    int ingreso, pos = 0, cant = 0;
	for (int i = 0; i < tam; i++)
	{
		cout << "ingrese un numero: ";
		cin >> ingreso;
		if (ingreso >= 0) {
			arreglo[i] = ingreso;
			cant++;
		}
		else {
			i = tam;
		}
	}
	return cant;
}

int main()
{
	int arreglo[500], cant;
	cant = guardar_positivos(arreglo, 10);
	for (int i = 0; i < cant; i++)
	{
		cout << arreglo[i]<<"\n";
	}
    
}
