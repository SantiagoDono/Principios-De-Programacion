// Ejercicio 19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>

//Ejercicio 19 El usuario ahora ingresa varias líneas con minúsculas y espacios, terminando en un punto.Indicar cuántas palabras se escribieron en total
using namespace std;

int main()
{
    char letra;
    int ContP = 1;
	cout << "ingrese el texto que quiera: \n";
	do
	{
		letra = getchar();
		if (letra == ' ' || letra =='\n') {
			ContP++;
		}
		
	} while (letra != '.');
	cout << " Hay un total de: " << ContP << "palabras ";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln