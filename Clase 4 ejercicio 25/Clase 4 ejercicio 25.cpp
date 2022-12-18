// Clase 4 ejercicio 25.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdio.h>
using namespace std;
/*Ejercicio 25) Dada una línea de texto, volver a imprimirla cambiando cada 
minúscula por la mayúscula siguiente ('a' por 'B'), y cada mayúscula por la 
minúscula anterior ('Z' por 'y') */
int main()
{
	char letra, cambio;
	cout << "se le devolvera lo mismo pero con la siguiente minuscula y mayuscula luego de que ";
	cout << "ingrese una linea de texto que termine en punto: " << endl;;
	
	do
	{
		letra = getchar();
		cambio = letra;
		if (letra > 94 and letra < 123) {
			cambio -= 31;
			cout << cambio;
		}else
			if (letra>64 and letra < 91)
			{
				cambio += 33;
				cout << cambio;
			}else
				if (letra == 32)
				{
					cout << " ";
				}

	} while (letra!=46);
}

