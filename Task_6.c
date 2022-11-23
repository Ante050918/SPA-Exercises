#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[])
{
	int i = 0, j, k;
	int d = strlen(str2);
	
	for (i, j = d - 1; (j >= 0); i++, j--)
		str2[j] = str1[i];

	str2[i] = '\0';
}

int main(void)
{
	char str1[50];
	char str2[50];

	printf("Unesite prvi string: ");
	gets(str1);

	printf("Unesite drugi string: ");
	gets(str2);

	reverse(str1, str2);
	printf("%s", str2);
	return 0;
}

