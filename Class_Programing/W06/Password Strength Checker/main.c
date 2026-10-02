#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s[101];
    bool Uppercase = false, characters = false, lowercase = false, digit = false;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if(i >= 8)
        {
            if (characters == false)
            {
                characters = true;
            }
        }
        if (s[i] >=  'A' && s[i] <= 'Z')
        {
            if (Uppercase == false)
            {
                Uppercase = true;
            }
        }
        if (s[i] >=  'a' && s[i] <= 'z')
        {
            if (lowercase == false)
            {
                lowercase = true;
            }
        }
        if (s[i] >=  '0' && s[i] <= '9')
        {
            if (digit == false)
            {
                digit = true;
            }
        }
    }
    if (Uppercase == true &&
            lowercase == true &&
            characters == true &&
            digit == true)
    {
        printf("Strong password");
    }
    else
    {
        printf("Weak password");
        if(Uppercase == false)
        {
            printf("\n- needs at least 8 characters");
        }
        if(lowercase == false)
        {
            printf("\n- needs an uppercase letter");
        }
        if(characters == false)
        {
            printf("\n- needs a lowercase letter");
        }
        if(digit == false)
        {
            printf("\n- needs a digit");
        }
    }
}
