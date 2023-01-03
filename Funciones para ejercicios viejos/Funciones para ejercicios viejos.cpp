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
int main()
{
    int unNum = 80,otroNum = 40 ;
    int resultado;

    resultado = multiplicacion(unNum, unNum);
    cout << "el resultado de la multiplicacion es: " << resultado<< endl;

    resultado = division(unNum, otroNum);
    cout << "el resultado de la divison es: " << resultado<<endl;

    resultado = promedio(unNum, otroNum);
    cout << "el promedio es: " << resultado << endl;

    resultado = divisores(unNum);

    
   
}

