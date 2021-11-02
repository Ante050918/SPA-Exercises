#include <stdio.h>
#include <string.h>

void mystrcpy(char* str1, char* str2)
{
	int i;
	

	for (i = 0; str2[i] != '\0'; i++)
		str1[i] = str2[i];

	str1[i] = '\0';
}

int main()
{
	char str1[] = "abc";
	char str2[] = "cde";

	mystrcpy(str1, str2);
	printf("%s", str1);

	return 0;
}