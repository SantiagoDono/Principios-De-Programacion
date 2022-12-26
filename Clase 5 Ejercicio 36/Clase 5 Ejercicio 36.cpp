#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
/*Crear una matriz de 3x3 con números aleatorios entre 0 y 9.
Permitir al usuario cambiar el elemento de la primer celda (0x0) con el de cualquier otra celda
en 5 ocasiones a modo de intentar ordenarla de menor a mayor*/
int main()
{
	int matriz[3][3];
	int cambios = 5, elegido,pos1,pos2;
	srand(time(NULL));
	
	for (pos1 = 0; pos1 <3; pos1++) {
		for (pos2 = 0; pos2 < 3; pos2++) {
			matriz[pos1][pos2] = rand() % 10;
		}
	}
	for (pos1 = 0; pos1 < 3; pos1++)
	{
		for (pos2 = 0; pos2 < 3; pos2++) {
			printf("|%d| ", matriz[pos1][pos2]);
		}
		printf("\n");
	}
	while (cambios!=0)
	{
		cout<<"ingrese la posicion de columna que desea cambiar: ";
		cin>> pos1;
		cout<<"\ningrese la posicion de la fila que desea cambiar: ";
		cin>> pos2;
		elegido = matriz[pos1][pos2];
		matriz[pos1][pos2]= matriz[0][0];
		matriz[0][0] = elegido;

		for (pos1 = 0; pos1 < 3; pos1++)
		{
			for (pos2 = 0; pos2 < 3; pos2++) {
				printf("|%d| ", matriz[pos1][pos2]);
			}
			printf("\n");
		}

		cambios--;
	}
}

