//•	mystrlen() – funkcija prima string (char*) i vraća integer koji predstavlja dužinu stringa.

#include <stdio.h>
#include <string.h>

int mystrlen(char* str)
{

	int i;
	int brojac = 0;
	for (i = 0; str[i] != '\0'; i++)
		brojac++;
	
	
	return brojac;
}


int main(void)
{
	int broj, x;
	char str[] = "Danas je cetvrtak";
	broj = mystrlen(str);
	printf("Duzina stringa iznosi: %d", broj);
	return 0;
}