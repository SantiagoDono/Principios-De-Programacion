#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
float promedio5() {
	float res, cont = 0, suma = 0, ingreso;
	for (int i = 0; i < 5; i++)
	{
		cont = i;
		cout << "ingrese un numero: ";
		scanf_s("%f",&ingreso);
		suma += ingreso;
		printf("Vas sumando: %f\n", suma);
	}
	res = suma / 5;
	return res;
}
int main()
{
	int i1, i2;
	float f1, f2,f3;
	i1 = 8;
	i2 = 3;
	cout << "tengo: " << i1 << " y " << i2;

	// si coloco un numero antes del tipo de dato indica la cantidad de espacios que ocupara el datoo
	
	printf("\ntengo\n %20d y \n%20d", i1, i2);

	/* en realidad estas cuentas estan mal porque no es 3 lo que tengo, pero como puedo indicar que es un numero con coma ?
	con un casteo de la siguiente manera
	Puedo colocarle un .0 por ejemplo para que sepa que es un float y no un entero:*/
	cout << "\n";

	f1 = 10 / 3.0;
	printf("el resultado de la division es: %f",f1);
	/*si no lo que puedo hacer es realizar un casteo*/
	
	f2 = i1 / (float)i2;
	printf("\nel resultado de la division es: %.20f", f2);

	/*otro tipo de casteo*/
	f1 = (float) 8 / 3;
	printf("tengo %f", f1);

	cout << "\n\n\n\n\n";
	f3 = promedio5();
	printf("el promedio es de: %f ", f3);


}

