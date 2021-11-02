#include <stdio.h>
#include <string.h>

void mystrcat(char* str1, char* str2)
{
	int i = 0, j = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
}

int main(void)
{
	char str1[50];
	char str2[50];

	printf("Unesite prvi string: ");
	gets(str1);

	printf("Unesite drugi string: ");
	gets(str2);

	mystrcat(str1, str2);
	printf("%s", str1);

	return 0;
}