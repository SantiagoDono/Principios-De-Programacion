#include<stdlib.h>
#include <iostream>
#include<stdio.h>
using namespace std;

bool primo(int numero) {
    int  div, resto, cont;
    bool res;
    div = 1;
    cont = 0;
    while (div <= numero) {
        resto = numero % div;
        if (resto == 0) {
            cont++;
        }
        div++;
    }

    if (cont == 2) {
        printf("%d es primo\n", numero);
        res= true;
    }
    else {
        printf("%d NO es primo\n", numero);
        res = false;
    }
   
    return res;
}
    
void juego(int x) {
    int ingreso = 0, correcto = 0, prim = 0;
    do
    {
        cout << "ingrese un numero: ";
        cin >> ingreso;
        prim = primo(ingreso);
        if (prim == true) {
            correcto++;
        }


    }while (correcto<=x);
}
int main()
{
    int cantidadP = 0,Ingreso = 0,correcto=0;
    printf("ingrese cuantos numeros primos es el tope: ");
    scanf_s("%i", &cantidadP);
    juego(cantidadP);

    
    
        
}

