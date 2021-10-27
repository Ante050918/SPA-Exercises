#include <stdio.h>
#include <string.h>

void reverse(char str1[], char str2[])
{
	int i = 0, j = 0, k;

	while (str2[i] != '\0')
		i++;

	while (str1[j] != '\0')
		j++;

	k = j - 1;

	while (str1[k] != str1[-1])
	{
		str2[i] = str1[k];
		i++;
		k--;
	}
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

