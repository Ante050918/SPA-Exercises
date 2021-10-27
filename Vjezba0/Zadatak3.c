#include <stdio.h>
#include <string.h>

int mystrcmp(char* str1, char* str2)
{
	int flag = 0;
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		

		if (str1[i] < str2[i])
		{
			flag = -1;
			return flag;
			break;
		}

		else if (str1[i] > str2[i])
		{
			flag = 1;
			return flag;
			break;
		}

		i++;
	}

	return 0;

	
	
}


int main(void)
{
	char str1[50];
	char str2[50];

	printf("Unesite prvi string: ");
	gets(str1);

	printf("Unesite drugi string: ");
	gets(str2);

	mystrcmp(str1, str2);
	printf("%d", mystrcmp(str1, str2));
	return 0;
}