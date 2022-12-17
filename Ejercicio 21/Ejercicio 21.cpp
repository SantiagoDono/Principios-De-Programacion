#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
 char actual,anterior ='n',salir='N';
 int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0, otras = 0;
 cout << "ingrese una oracion que termine en dos puntos seguidos" << endl;
 do
 {
	 actual = getchar();
	 switch (actual)
	 {
	 case 'a':
		 contA++;
		 break;
	 case 'e':
		 contE++;
		 break;
	 case 'i':
		 contI++;
		 break;
	 case 'o':
		 contO++;
		 break;
	 case'u':
		 contU++;
		 break;
	 case'.':
		 if (anterior == '.')
		 {
			 salir = 's';
		 }break;
	 default:
		 otras++;
		 break;
	 }
	 anterior = actual;

 }while (salir =='N');
 cout << "hay " << contA << " A.\n" << "Hay " << contE << " E.\n" << "Hay " << contI << " I.\n" << "Hay " << contO << " O. \n" << "Hay " << contU << " U.\n" << "Hay " << otras << " que no son vocales." << endl;
 return 0;
}

