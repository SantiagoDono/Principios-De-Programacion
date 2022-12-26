#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
//ejercicio de ejemplo
int main()
{

	int matriz[3][3];
	int pos, pos1,dato=0;
	// llenamos la matriz de 0 
	for (pos = 0; pos < 3; pos++)
	{
		for (pos1 = 0; pos1 < 3; pos1++)
			matriz[pos][pos1] = 1;
	}
	//imprimimos
	for ( pos = 0; pos <3 ; pos++)
	{
		for (pos1 = 0; pos1 < 3; pos1++) {
			printf("|%d| ", matriz[pos][pos1]);
		}
		printf("\n");
	}
	// pido los numeros
	do
	{
		for (pos = 0; pos < 3; pos++) {
			
			for (pos1 = 0; pos1 < 3; pos1++) {
				printf("ingrese un numero entre 1 y 9: ");
				scanf_s("%d", &dato);
				matriz[pos][pos1] = dato;
			}
		}

	} while (matriz[pos][pos1] == 0);
	// imprimop para mostrar como quedo
	for (pos = 0; pos < 3; pos++)
	{
		for (pos1 = 0; pos1 < 3; pos1++) {
			printf("|%d| ", matriz[pos][pos1]);
		}
		printf("\n");
	}
	//SEGUIR EN 1:25:37
	printf("\n lo giramos 90 grados. \n");
	for (pos1 = 0; pos1 < 3; pos1++)
	{
		for (pos = 2; pos >=0; pos--) {
			printf("|%d| ", matriz[pos][pos1]);
		}
		printf("\n");
	}

	printf("\n lo giramos 180 grados. \n");
	for (pos = 2; pos >=0; pos--)
	{
		for (pos1 = 2; pos1 >= 0; pos1--) {
			printf("|%d| ", matriz[pos][pos1]);
		}
		printf("\n");
	}
	

	return 0;
}

