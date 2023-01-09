#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int suma(int numero1, int numero2) {
    int resultado = numero1 + numero2;
    return resultado;
}
int resta(int numero1, int numero2) {
    int resultado = numero1 - numero2;
    return resultado;
}
int multiplicacion(int numero1, int numero2) {
    int resultado = suma(numero1, numero2);
    numero2--;
    while (numero2 > 1) {
        numero2--;
        resultado = suma(resultado, numero2);
        
    }
    return resultado;
}


int division(int numero1, int numero2) {
    int contador = 0;
    int resultado = resta(numero1,numero2);
    contador++;
    while (resultado >0) {
        contador++;
        resultado = resta(resultado, numero2);
    }
   
    return contador;;
}
//promedio entre dos numeros
int promedio(int numero1, int numero2) {
    int resultado = suma(numero1, numero2);
   resultado = division(resultado, 2);
    return resultado;
}

int divisores(int numero) {
    int divisor = 0;
    cout << "los divisores de " << numero << " son: ";
    while (divisor <= numero) {
        divisor++;
        if (numero % divisor == 0) {
            cout << divisor << " ";
        } 
    }
    return divisor;
}

int menor(int numero1, int numero2) {
    int resultado = 0;
    if (numero1 < numero2) {
        resultado = numero1;
        cout << "El numero mas chico es: " << resultado;

    } else
    if(numero1 == numero2){
        cout << "Ambos numeros son iguales";
    }
    else {
        resultado = numero2;
        cout << "El numero mas chico es: " << resultado;
    }
    return resultado;
}
void primo(int numero) {
    int divisor = 1,cont = 0,resto = 0;
    do {
        resto = numero % divisor;
        if (resto ==0) {
            cont++;
            divisor++;
        }
        else {
            divisor++;
        }
    } while (divisor <= numero and cont<2);
    if (cont == 2) {
        cout << numero << " es primo";
    }
    else {
        cout << numero << " no es primo";
    }
}


//Seguir en el minuto 50: me quedan las funciones del indicar el menor, si es primo e imprimir los primos menores a un numero.
int main()
{
    /*int unNum = 10,otroNum = 80 ;
    int resultado;

    resultado = multiplicacion(unNum, unNum);
    cout << "el resultado de la multiplicacion es: " << resultado<< endl;

    resultado = division(unNum, otroNum);
    cout << "el resultado de la divison es: " << resultado<<endl;

    resultado = promedio(unNum, otroNum);
    cout << "el promedio es: " << resultado << endl;

    resultado = divisores(unNum);
    cout << "\n";

    resultado = menor(unNum, otroNum);
    cout << "\n";*/

    primo(6);
   
}

