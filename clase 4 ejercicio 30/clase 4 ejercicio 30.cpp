#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
/*Ejercicio 30) Ver cuál es la letra del abecedario que más se repite en un texto,todas en minuscula*/
int main()
{
    int pos, posmay, canti[26];
    char letra,prueba;
    //inicializo el arreglo en 0
    for (pos = 0; pos < 26; pos++) {
        canti[pos] = 0;
    }
    cout << "ingrese una linea de texto: ";
    //leo lo que ingreso
    letra = getchar();
    while (letra!='\n')
    {
        //si lo ingresado es una letra 
        if (letra>='a' and letra <='z')
        {
            //ahora si sumamos al arreglo 
            canti[letra - 'a'] = canti[letra - 'a'] + 1;
            //lo que pasa en la linea de arriba es que si letra es a le resta a y queda en cero le suma 1 si fuese b la pos queda en 1 y le suma 1

        }
        letra = getchar();
    }
    //ahora hay que buscar cual es el la letra que mas se repite
    posmay = 0;
    for (pos = 1; pos < 26; pos++)
    {
        if (canti[pos] > canti[posmay])
        {
            posmay = pos;
        }
    }
    prueba = posmay;
    printf("\nLa letra %c fue la que mas aparecio", posmay + 'a');
    printf(" un total de %d veces.", canti[posmay]);
}

