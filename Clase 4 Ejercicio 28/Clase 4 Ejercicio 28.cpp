// Clase 4 Ejercicio 28.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include < stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char palabra[20];
	char letra;
	int tope=0;
	cout << "ingrese una palabra de hasta 20 caracteres:\n " ;
	letra = getchar();
	for (int pos = 0; pos < 20 and letra!='\n'; pos++)
	{
		palabra[pos] = letra;
		letra = getchar();
		cout << palabra[pos];

		tope = pos;

	}
	cout << "\nahora lo imprimimos al reves:\n";
	for (int pos =tope; pos >= 0; pos--)
	{
		if (palabra[pos] >= 'a' and palabra[pos]<='z')
		{
			palabra[pos] = palabra[pos] - 32;
			
		}
		cout << palabra[pos];

	}
}
