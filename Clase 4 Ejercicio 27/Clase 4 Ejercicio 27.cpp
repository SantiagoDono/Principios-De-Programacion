#include <iostream>
#include <stdio.h>
#include < stdlib.h>

using namespace std;
// ejercicio 27 Leer una palabra de 5 caracteres y luego imprimirla al reves 
int main()
{
    cout << "ingrese una palabra de 5 letras: " << endl;
    char palabra[5];
	for (int pos = 0; pos < 5 ; pos++)
	{
		cin >> palabra[pos];
	}
	cout << "la palabra al reves es: " << endl;
	for (int i = 5; i >=0; i--)
	{
		cout << palabra[i]; 
	}
}

