#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    char s1[101];
    scanf("%s", s);
    int x = strlen(s) - 1;

    for (int i = 0; i < strlen(s);i++){
        s1[i] = s[x - i];
        printf("%c", s1[i]);

    }
}
