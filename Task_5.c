#include <stdio.h>
#include <string.h>

char* mystrstr(char src[], char str[])
{
    int i = 0,j , l;
    
    while (src[i] != '\0')
    {

        l = i;
        j = 0;
        while (src[i] == str[j] && src[i] != '\0' && str[j] != '\0')
        {
            i++;
            j++;
        }

        if (str[j] == '\0')
            return &src[l];
        if (src[i] == '\0')
            return NULL;

        i = l + 1;

    }
}

int main()
{
    int location, l;
    char str[] = "abaaaaaba";
    char substr[] = "aaab";
    char* loc = mystrstr(str, substr);
    printf("%s", loc);
    return 0;
}


