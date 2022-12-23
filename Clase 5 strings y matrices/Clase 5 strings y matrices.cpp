#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char palabra1[50] = { 'a','l','g','o','\0' };
	char palabra2[50] = "otra cosa";
	int pos = 0;
	do
	{
		printf("%c", palabra1[pos]);
		pos++;
	} while (palabra1[pos]!= '\n' and pos <10);
	printf("\nAhora imprimo la segunda palabra: \n");
	pos = 0;
	do
	{
		printf("%c", palabra2[pos]);
		pos++;
	} while (palabra2[pos] != '\n' and pos <10);
	
	printf("\nIngrese un texto de maximo 10 palabras: \n");
	pos = 0;
	do
	{
		palabra1[pos] = getchar();
		pos++;

	} while (palabra1[pos]!='\n' and pos< 10);
	palabra1[pos] = '\0';
	printf("\n");
	printf("%s", palabra1);
}

