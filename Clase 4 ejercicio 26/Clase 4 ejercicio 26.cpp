#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	cout << "ingrese un texto que termine en dos puntos: ";
	char actual, anterior = 'N', salir = 'N';
	int palabras = 1, cont = 0;
	do
	{
		actual = getchar();		switch (actual)
		{
		case' ':
			anterior = actual;
			actual = getchar();
			if (actual != ' ')
				palabras++;
			break;
		case'\n':
			anterior = actual;
			actual = getchar();
			palabras++;

		case'.':
			if (anterior == '.')
			{
				salir = 's';
			}break;
		}
		anterior = actual;


	} while (salir != 's');
	cout << "palabras: " << palabras << endl;
}