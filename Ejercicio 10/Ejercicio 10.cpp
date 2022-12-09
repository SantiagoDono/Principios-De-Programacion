

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
// ingresar un numero y devolverlo digito por digito (puede devolverse al reves)
int main()
{
	int numero, digito;
	cout << " ingrese un numero: ";
	cin >> numero;
	while (numero>0)
	{
		
		digito = numero % 10;
		cout << digito << " ";
		numero = numero / 10;
	}
	return 0;
}


