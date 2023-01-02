#include<Stdlib.h>
#include <iostream>
#include<stdio.h>

using namespace std;
/*Permitir al usuario decidir el tamaño T de una matriz cuadrada (TxT) llena de
espacios. Guardar una cantidad T de letras que ingrese el usuario en celdas aleatorias de la
matriz, evitando colisiones*/
int main()
{
    srand(time(NULL));
    char matriz[10][10];
    int t,cantL,pos1,pos2,pos;
    char letra [81];

    cout << "elige el tamano de la matriz como maximo 10 y minimo 5: ";
    cin >> t;
    do {
        if (t < 5) {
            cout << "el tamano debe ser mayor a 5.\n Elige nuevamente el tamano: ";
            cin >> t;
        }else
            if (t > 10) {
                cout << "el tamano debe ser menor a 10.\n Elige nuevamente el tamano: ";
                cin >> t;
            }
    } while (t < 5 || t>10);

    for (int i = 0; i < t; i++)
    {
        for (int f = 0; f < t; f++)
        {
            matriz[i][f] = '0';
        }
        cout << "\n";
    }
    cout << "cuantas letras desea ingresar? ";
    cin >> cantL;
    
        if (cantL > (t*t))
        {
            cantL = (t * t);
            
        }
        cout << "usted va a ingresar un total de: " << cantL << " letras" << endl;
        //guardo las letras que ingrese el usuario en un vector
        pos = 0;
        
        while (cantL > 0) {
            printf("ingrese una letra: ");
            getchar();
            letra[pos] = getchar();
            pos++;
            cantL--;
        }
        // esto de aca abajo simplemente coloca las letras en la matriz
     /*   for (pos1 = 0; pos1 < t; pos1++)
        {
            for (pos2 = 0; pos2 < t; pos2++) {
                if (matriz[pos1][pos2] == '0' and pos>=0) {
                    matriz[pos1][pos2] = letra[pos];
                    pos--;
                }
                else {
                    matriz[pos1][pos2] = '*';
                }
            }
        }*/
        for (cantL = 0; cantL <= pos; cantL++) {
            do
            {
                pos1 = rand() % t;
                pos2 = rand() % t;

            } while (matriz[pos1][pos2]!='0');
            matriz[pos1][pos2] = letra[cantL];
        }
        
        for (pos1 = 0; pos1 < t; pos1++)
        {
            for (pos2 = 0; pos2 < t; pos2++) {
                
                 cout<<" " << matriz[pos1][pos2];
                
               
            }
            printf("\n");
        }



    

   // solucion 1:45 seguir probando igual que en realidad es accesible

    return 0;
}

