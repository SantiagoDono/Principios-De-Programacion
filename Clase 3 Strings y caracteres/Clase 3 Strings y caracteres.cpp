// Clase 3 Strings y caracteres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char letra;
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0,otras = 0;
	cout << "ingrese una letra: "<< endl;
	for ( int cont = 0; cont < 20; cont++)
	{
		letra = getchar();
		switch (letra)
		{
		case 'a':
			contA++;
			break;
		case 'e': 
			contE++;
			break;
		case 'i':
			contI++;
			break;
		case 'o':
			contO++;
				break;
		case'u':
			contU++;
		default:
			otras++;
			break;
		}

	}
	cout << "hay " << contA << " A.\n" << "Hay " << contE << " E.\n" << "Hay " << contI << " I.\n" << "Hay " << contO << " O. \n" << "Hay " << contU << " U.\n" << "Hay " << otras << " que no son vocales." << endl;
}

