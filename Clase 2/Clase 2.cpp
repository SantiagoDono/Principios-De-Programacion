// Clase 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//int main(){
//    // ejercicio 5 hayar un numero primo
//    int numero, div, resto,cont;
//    cout << "Ingrese un numero: " << endl;
//    cin >> numero;
//     div = 1;
//     cont = 0;
//    while (div <= numero) {
//        
//        resto = numero % div;
//        if (resto == 0) {
//-            cont++;
//        }
//            div++;
//
//    }
//    if (cont == 2) {
//        cout << numero << " Es primo." << endl;
//    }
//    else {
//        cout << numero << " No es primo." << endl;
//    }
//
//    //ejercicio 6
//
//    return 0;
//    
//}

int main() {
	int numero, div, cont, resto;

	cout << "Ingrese un numero:" << endl;
	cin >> numero;
	cont = 1;
	div = 1;
	while (div <= numero)
	{
		resto = numero % div;
		if (resto == 0)
		{
			cont++;

		}
			div++;
		if (cont == 2) {
			cout << numero << endl;
			numero--;
			cont = 1;
			div = 1;

		}
			numero--;
		
	}
	return 0;
}
