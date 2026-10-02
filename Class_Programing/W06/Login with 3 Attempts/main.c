#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[101];
    scanf("%s", s);
    for(int i = 2; i >= 0; i--)
    {
        char s1[101];
        scanf("%s", s1);
        if (strcmp(s, s1) == 0)
        {
            printf("Welcome!");
            break;
        }
        if (i == 0)
        {
            printf("Account locked.");
        }
        else
        {
            printf("Wrong password. Attempts left: %d", i);
        }
    }
}
