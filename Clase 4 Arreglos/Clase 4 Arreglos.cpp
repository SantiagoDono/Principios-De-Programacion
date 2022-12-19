

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
//ejemplos 
int main()
{
	//1 intro
	int num;
	int arrEnteros[4];//al declararse hay basura
	arrEnteros[0] = 10;//asigno un valor a la posicion abajo tambien
	arrEnteros[1] = 9;
	num = 2;
	arrEnteros[num] = num;//utilizo la variable para asignar la posicion y establecer el valor
	for (int i = 0; i < 4; i++)
	{
		cout << arrEnteros[i] << endl;
	}
	// inicializando en la declaracion
	int num1;
	int enterosA[10] = { 1,2,3,4,5,6,7,8 };
	num1 = 9;
	enterosA[num] = 11;

	return 0;
}

