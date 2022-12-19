

#include <iostream>
#include < stdio.h>
#include <stdlib.h>

using namespace std;
//COPIAR DE UN ARREGLO A OTRO EJEMPLO 
int main()
{
	int pos;
	int enteros[] = { 1,2,3,4 }; // en este caso el tamaño esta definido por la cantidad de datos que ingrese
	int copia[4];

	for (int pos = 0; pos < 4; pos++)
	{
		 copia[pos] = enteros[pos];
	}
	for (int pos = 0; pos < 4; pos++)
	{
		cout << copia[pos]<<' ';
		
	}


	cout << '\n' << endl;

	cout << "imprimimos el abecedario: " << endl;
	char letra[26];
	for (int i = 0; i <26 ; i++)
	{
		 letra[i]='a' + i;
		 cout << letra[i] << ' ';
	}
	cout << "\nlo imprimimos al reves! " << endl;
	for (int pos = 25; pos >-1; pos--)
	{
		cout << letra[pos] << ' ';
	}
	return 0;
}


