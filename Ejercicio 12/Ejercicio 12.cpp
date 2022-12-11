// Ejercicio 12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include<stdio.h>

using namespace std;
// calculadora que pueda hacer suma, resta, multiplicacion y division (entre dos numeros nada mas) 
int main()
{
    int num1, num2, oper, resultado;
    cout << "ingrese la operacion que desea realizar: \n 1 para suma. \n 2 para resta. \n 3 multiplicacion. \n 4 division.\n ";
    cin >> oper;
    cout << "ingrese el primer numero:  ";
    cin >> num1;
    cout << "ingrese el segundp numero: ";
    cin >> num2;

    if (oper == 1) {
        resultado = num1 + num2;
        cout << "el resultado de la suma es: " << resultado << endl;
    }
    else
        if (oper == 2) {
            resultado = num1 - num2;
            cout << "el resultado de la resta es: " << resultado << endl;
        }else
            if (oper == 3) {
                if (num1 != 0 and num2 != 0) {
                    resultado = num1 * num2;
                    cout << "el resultado de la multiplicacion es: " << resultado << endl;
                }
                else {
                    cout << "el resultado es 0 debido a auqe alguno de los dos numeros es 0." << endl; 
                }
            }
            else {
                if (num1 > num2) {
                    resultado = num1 / num2;
                    cout << "el resultado de la division es: " << resultado;
                }
                else {
                    resultado = num2 / num1;
                    cout << "el resultado de la division es: " << resultado;
                }
            }



}


