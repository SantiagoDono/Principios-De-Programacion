#include<stdio.h>
#include <iostream>
#include<stdlib.h>
using namespace std;
int convertir(char str[]) {
	int num = 0, pos = 0;
	while (str[pos] != '\0') {
		num *= 10;
		num += str[pos] - '0';// se suma el valor del caracter en ASCII y se le resta el 0 ppara que sea por ejemplo en caso de que sea 1 se le suma ria uno y no 51 
		pos++;
		}
	
	return num;
}
int main()
{
	char str[20] = "199845";
	int numero;
	numero = convertir(str);
	printf("%d", numero);
	return 0;
}

