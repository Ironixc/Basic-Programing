#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    int C = 0;
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A' || s[i] == 'a' ||
                s[i] == 'I' || s[i] == 'i' ||
                s[i] == 'U' || s[i] == 'u' ||
                s[i] == 'E' || s[i] == 'e' ||
                s[i] == 'O' || s[i] == 'o' )
        {
            C++;
        }
    }
    printf("%d", C);
}
