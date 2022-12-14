// Clase 3 (intro a switch).cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int num1, num2, oper, resultado, ant, cont;
    cout << "ingrese la operacion que desea realizar: \n 1 para suma. \n 2 para resta. \n 3 multiplicacion. \n 4 division.\n 5 para elevar un numero al cuadrado\n 6 para arrancar nuevamente\n 7 para salir " << endl;
    cin >> oper;
    cont = 0;
    while (oper !=7){
        if (oper != 5 and oper != 6 and cont < 1) {
            cout << "ingrese el primer numero:  ";
            cin >> num1;
            cout << "ingrese el segundp numero: ";
            cin >> num2;
        }
        else
            if (oper == 5 and cont < 1) {
                cout << " ingrese el numero a elevar: ";
                cin >> num1;

            }
        switch (oper)
        {
        case 1:
            if (cont > 0) {
                cout << " ingrese el numero a sumar al resultado anterior: ";
                cin >> num1;
                resultado = ant + num1;
                ant = resultado;
                cout << "\n el resultado es: " << resultado;
                cout << "\ningrese que operacion quiere realizar: ";
                cin >> oper;

            }
            else {
                resultado = num1 + num2;
                cout << "el resultado de la suma es: " << resultado << endl;
                cont++;
                ant = resultado;
                cout << "ingese que operacion quiere realizar: ";
                cin >> oper;

            }
        
            break;
        case 2:
            if (cont > 0) {
                cout << "ingrese el numero a restar del resultado anterior: ";
                cin >> num1;
                resultado = ant - num1;
                cout << "el resultado es: " << resultado;
                ant = resultado;
                cout << "\ningrese la operacion que quiere realizar: ";
                cin >> oper;
            }
            else {
                resultado = num1 - num2;
                cout << "el resultado de la resta es: " << resultado << endl;
                cont++;
                ant = resultado;
                cout << "\n ingese que operacion quiere realizar: ";
                cin >> oper;

            }
            break;
        case 3:
            if (cont > 0) {
                cout << "ingrese el numero que multipicara el resultado anterior: ";
                cin >> num1;
                resultado = ant * num1;
                cout << "El resultado es : " << resultado;
                ant = resultado;
                cout << "\nIngrese que operacion quiere realizar: ";
                cin >> oper;
            }
            else {

                if (num1 != 0 and num2 != 0) {
                    resultado = num1 * num2;
                    cout << "el resultado de la multiplicacion es: " << resultado << endl;
                    cont++;
                    ant = resultado;
                    cout << "ingese que operacion quiere realizar: ";
                    cin >> oper;
                }
                else {
                    cout << "el resultado es 0 debido a auqe alguno de los dos numeros es 0." << endl;
                    cout << "ingese que operacion quiere realizar: ";
                    cin >> oper;
                }
            }
            break;
        case 4:
            if (cont > 0) {
                cout << "ingrese el numero que divide al resultado anterior: " << endl;;
                cin >> num1;
                if (ant >= num1) {
                    resultado = ant / num1;
                    ant = resultado;
                    cout << "el resultado es: " << resultado << endl;
                    cout << "ingrese la operacion que quiere realizar";
                    cin >> oper;
                }
                else {
                    if (ant < num1) {
                        resultado = num1 / ant;
                        ant = resultado;
                        cout << "el resultado es: " << resultado << endl;
                        cout << "ingrese la operacion que quiere realizar";
                        cin >> oper;
                    }
                }
            }
            else {
                if (num1 > num2) {
                    resultado = num1 / num2;
                    cout << "el resultado de la division es: " << resultado << endl;
                    cont++;
                    ant = resultado;
                    cout << "ingese que operacion quiere realizar: ";
                    cin >> oper;
                }
                else {
                    resultado = num2 / num1;
                    cout << "el resultado de la division es: " << resultado << endl;
                    cont++;
                    ant = resultado;
                    cout << "ingese que operacion quiere realizar: ";
                    cin >> oper;
                }
            }
            break;
        case 5:
            if (cont > 0) {
                resultado = ant * ant;
                cout << "el resultado es: " << resultado << endl;
                cout << "ingrese la operacion a realizar: ";
                cin >> oper;
            }
            else {
                resultado = num1 * num1;
                cout << "El resultado es: " << resultado;
                cont++;
                ant = resultado;
                cout << "ingese que operacion quiere realizar: ";
                cin >> oper;

            }
            break;
        case 6:
            cont = 0;
            num1 = 0;
            num2 = 0;
            cout << "ingese que operacion quiere realizar: ";
            cin >> oper;
            break;
        default:
            cout << "ingrese la operacion que desea realizar: \n 1 para suma. \n 2 para resta. \n 3 multiplicacion. \n 4 division.\n 5 para elevar un numero al cuadrado\n 6 para arrancar nuevamente\n7 para salir " << endl;
            break;
        }

    }
    cout << "Gracias por usar la calculadora! " << endl;
}
